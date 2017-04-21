/*
  A simple program that simulates 5 MM1 queues at an airport. The first queue
  feeds 3 other queues that work in parallel. These feed a final queue.
  Simulation runs until error below threshold and, at the end,
  a performance evaluation report is shown, and logs are generated
  for plotting and analysis.
*/

using namespace std;

#include <random>
#include "customer.h"
#include "mm1_queue.h"


std::random_device rd;

void pause()
{
 std::string sInputString;
 // Wait for input from stdin (the keyboard)
 cout << "Continue (y)?";
 std::cin >> sInputString;
}



int main(int argc, char* argv[])
{
   int next = 0;
//   test_random_number_generator();

   for (int cur_lambda = 3; cur_lambda < 34; cur_lambda++)
   {
      
	   //TODO Create MM1_Queue objects to capture the airport senario.
	   MM1_Queue gate_agent;
	   gate_agent.set_file_names("01_log.txt", "01_wait.txt", "01_service.txt");
	  
	   gate_agent.set_lambda(cur_lambda);
	   gate_agent.set_mu(53);
	   gate_agent.initialize();
	   gate_agent.set_seed(1, rd());

	 
	   MM1_Queue security_check1;
	   security_check1.set_file_names("02_log.txt", "02_wait.txt", "02_service.txt");
	   security_check1.autogenerate_new_arrivals(false);
	   security_check1.set_lambda(cur_lambda / 3);
	   security_check1.set_mu(20);
	   security_check1.initialize();
	   security_check1.set_seed(rd(),rd());


	   MM1_Queue security_check2;
	   security_check2.set_file_names("03_log.txt", "03_wait.txt", "03_service.txt");
	   security_check2.autogenerate_new_arrivals(false);
	   security_check2.set_lambda(cur_lambda / 3);
	   security_check2.set_mu(20);
	   security_check2.initialize();
	   security_check2.set_seed(rd(), rd());


	   MM1_Queue security_check3;
	   security_check3.set_file_names("04_log.txt", "04_wait.txt", "04_service.txt");
	   security_check3.autogenerate_new_arrivals(false);
	   security_check3.set_lambda(cur_lambda / 3);
	   security_check3.set_mu(20);
	   security_check3.initialize();
	   security_check3.set_seed(rd(), rd());


	   MM1_Queue boarding;
	   boarding.set_file_names("05_log.txt", "05_wait.txt", "05_service.txt");
	   boarding.autogenerate_new_arrivals(false);
	   boarding.set_lambda(cur_lambda);
	   boarding.set_mu(80);
	   boarding.initialize();
	   boarding.set_seed(rd(), rd());

	   //************************************************************


   for (; 
		!gate_agent.is_within_error_range(0.002) ||     //TODO: add is_within_error_range check
        !security_check1.is_within_error_range(0.002) ||
	    !security_check2.is_within_error_range(0.002) ||
	    !security_check3.is_within_error_range(0.002)
	    ;
	   )
   {
	   Customer cust  = gate_agent.process_next_event();   // =  TODO: process next event;
	   Customer cust2 = security_check1.process_next_event();   // =  TODO: process next event;
	   Customer cust3 = security_check2.process_next_event();   // =  TODO: process next event;
	   Customer cust4 = security_check3.process_next_event();   // =  TODO: process next event;
	   boarding.process_next_event();   // =  TODO: one more process_next_event for the last object.

       if (cust.get_type() == Customer::COMPLETED())
       {
          switch(next)
          {
            case 0:
				security_check1.add_external_arrival();   //TODO add_external_arrival() for your security gates;
                 break;
            case 1:
				security_check2.add_external_arrival();   //TODO add_external_arrival() for your security gates;
                 break;
            case 2:
				security_check3.add_external_arrival();  //TODO add_external_arrival() for your security gates;
                 break;
          }
          next++;
          if (next%3==0) next = 0;
       }
       if (cust2.get_type() == Customer::COMPLETED() || cust3.get_type() == Customer::COMPLETED() || cust4.get_type() == Customer::COMPLETED())
       {
		   boarding.add_external_arrival();
		   //TODO add_external_arrival(); on your final boarding MM1_Queue object
       }
   }



   //TODO Output statistics airport senario.


  // std::cout << "cur_lambda = " << cur_lambda << " get mean number of customers " << gate_agent.get_mean_number_customers() << std::endl;
  // std::cout << security_check1.get_mean_number_customers()  <<security_check2.get_mean_number_customers() << std::endl;
  // std::cout <<security_check3.get_mean_number_customers() <<boarding.get_mean_number_customers() << std::endl;
   gate_agent.output(); gate_agent.get_current_time(); gate_agent.plot_results_output(); cout << "****Gate Agent*****" << endl;
   security_check1.output(); security_check1.get_current_time(); security_check1.plot_results_output(); cout << "****Security Check 1*****" << endl;
   security_check2.output(); security_check2.get_current_time(); security_check2.plot_results_output(); cout << "****Security Check 2*****" << endl;
   security_check3.output(); security_check3.get_current_time(); security_check3.plot_results_output(); cout << "****Security Check 3*****" << endl;
   boarding.output(); boarding.get_current_time(); boarding.plot_results_output(); cout << "****Boarding*****" << endl;

   //**************************************************************************

   gate_agent.plot_results_output();

   }

   return(0);
}

