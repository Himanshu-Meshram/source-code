#include <iostream>
#include <string>

int main() {
    std::string username;
    std::string password;
    
    std::cout << "\n\t\t\t\t\tWelcome to the ticket booking system!";
        std::cout << "\n----------------------------------------------------------------------------------------------------------------------";
    std::cout << "\n\t\t\t\t\tPlease enter your admin username: ";
    std::cin >> username;
    std::cout << "\n\t\t\t\t\tPlease enter your admin password: ";
    std::cin >> password;
        std::cout << "----------------------------------------------------------------------------------------------------------------------\n";

    if (username == "11" && password == "11"){
	
        std::string movie;
        int time;
        int tickets;
        std::string name;
        std::string address;
        std::string phone;
        std::string card;
        int choice;
        while (true) {
            std::cout << "\n\t\t\t\t\t\t\tWelcome, Admin\n";
            std::cout << "\n\t\t\t\t\tPlease select a movie:";
            std::cout << "\n\t\t\t\t\t<1>. Your Name";
            std::cout << "\n\t\t\t\t\t<2>. Jujutsu Kaisen 0";
            std::cout << "\n\t\t\t\t\t<3>. DEMON SLAYER - Mugan Train";
            std::cout << "\n\t\t\t\t\t<4>. Drifting Home";
            std::cout << "\n\t\t\t\t\t<5>. Bubble\n\t\t\t\t";            
            std::cin >> movie;
            if (movie == "1") {
                movie = "Your Name";
            } else if (movie == "2") {
                movie = "Jujutsu Kaisen 0";
            } else if (movie == "3") {
                movie = "DEMON SLAYER - Mugan Train";
            } else if (movie == "4") {
                movie = "Drifting Home";                
            } else if (movie == "5") {
                movie = "Jujutsu Kaisen 0"; 
		}	else {
                std::cout << "Invalid choice. Please try again.";
                continue;
            }
            std::cout << "\n\t\t\t\t\t##Please select an option##";
            std::cout << "\n\t\t\t\t\t1. Movie Timings";
            std::cout << "\n\t\t\t\t\t2. Receiving Ticket";
            std::cout << "\n\t\t\t\t\t3. Information";
            std::cout << "\n\t\t\t\t\t4. DTCard Registration";
            std::cout << "\n\t\t\t\t\t5. Exit\n\t\t\t\t";

            std::cin >> choice;

            switch (choice) {
                case 1:
                    std::cout << "\n\t\t\t\t\tPlease select the time of the movie: ";
                   	std::cout<<"\n\t\t\t\t <1> 10:15";
                   	std::cout<<"\n\t\t\t\t <2> 12:00";
                   	std::cout<<"\n\t\t\t\t <3> 3:10";
                   	std::cout<<"\n\t\t\t\t <4> 5:20";
                   	std::cout<<"\n\t\t\t\t <5> 8:20\n\t\t\t\t";

                    std::cin >> time;
                    std::cout << "Movie: " << movie << " at " << time << " has been booked.";
                    break;
                case 2:
                    std::cout << "Please enter the number of tickets: ";
                    std::cin >> tickets;
                    std::cout << "Please enter your name: ";
                    std::cin >> name;
                    std::cout << tickets << " tickets have been booked for movie "<< movie << " under the name " << name << ".";
                    break;
                case 3:
                    std::cout << "For any inquiries, please contact 1800-99-6969.";
                    break;
                case 4:
                    std::cout << "\nPlease enter your name: ";
                    std::cin >> name;
                    std::cout << "\nPlease enter your address: ";
                    std::cin >> address;
                    std::cout << "\nPlease enter your phone number: ";
                    std::cin >> phone;
                    std::cout << "\nPlease enter your DTCard number: ";
                    std::cin >> card;
                    std::cout << "\nThank you for registering your DTCard, " << name << "." ;
                    break;
                case 5:
                    return 0;
                default:
                    std::cout << "Invalid choice. Please try again.";
                    break;
            }
        }
    } else {
        std::cout << "Invalid username or password. Access denied.";
    }

    return 0;
}

