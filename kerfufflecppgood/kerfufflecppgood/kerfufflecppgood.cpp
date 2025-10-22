#include "kerfufflecppgood.h"

int main()
{
    printf("\033[1;35m\n"
        "__________.             _____       _____  _____.__\n"
        "|    |/ _|_____________/ ____\\_ ___/ ____\\/ ____\\  |   ____\n"
        "|     <_/ __  \\_ __ \\    __\\ | \\     __\\   __\\  |  | _/ __ \\ \n"
        "|    | \\  ___/|  | \\/|  | |  |  /|  |   |  |    |  |_\\  ___/\n"
        "|____|__\\___  >__|   |__| |____/ |__|   |__|    |____/\\___ >\n"
        "       \\/   \\/                                            \\/\n"
        "�2024 Inf Potentiality\n\n"
        );

    while (running) {
        printf("\033[1;m\n"
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
            "\033[1;36m99. About\033[1;33m   100. Other Tools    0. Exit\033[1;m\n\n"
        );
        printf("Select service: ");
        int option_num;
        std::cin >> option_num;

        OPTION option = static_cast<OPTION>(option_num);

        handleOption(option);
    }

    cleanup();
    return 0;
}

void facebook() {
    queryNameNumber(FACEBOOK_QUERY_URL);
}

void twitter() {
    queryNameNumber(TWITTER_QUERY_URL);
}

void whitepages() {
    queryName(WHITEPAGES_QUERY_URL_NAME);
    queryNumber(WHITEPAGES_QUERY_URL_PHONE);
}

void google() {
    queryNameNumber(GOOGLE_QUERY_URL);
}

void searchpeoplefree() {
    queryName(SEARCHPEOPLEFREE_QUERY_URL_NAME);
    queryNumber(SEARCHPEOPLEFREE_QUERY_URL_PHONE);
}; 

void truepeoplesearch() {
    queryName(TRUEPEOPLESEARCH_QUERY_URL_NAME);
    queryNumber(TRUEPEOPLESEARCH_QUERY_URL_PHONE);
}

void experimental() {
    std::string url;
    std::string name;
    std::string num;
    std::string query;
    bool isCombined;

    std::cout << "What is their name? (ENTER for none): ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "What is their number?: ";
    std::getline(std::cin >> std::ws, num);

    url = FACEBOOK_QUERY_URL;
    isCombined = true;
    experimentalInput(url, name, num, query, isCombined);

    url = TWITTER_QUERY_URL;
    isCombined = true;
    experimentalInput(url, name, num, query, isCombined);

    url = WHITEPAGES_QUERY_URL_NAME;
    isCombined = false;
    query = name;
    experimentalInput(url, name, num, query, isCombined);
    url = WHITEPAGES_QUERY_URL_PHONE;
    query = num;
    experimentalInput(url, name, num, query, isCombined);

    url = GOOGLE_QUERY_URL;
    isCombined = true;
    experimentalInput(url, name, num, query, isCombined);

    url = SEARCHPEOPLEFREE_QUERY_URL_NAME;
    isCombined = false;
    query = name;
    experimentalInput(url, name, num, query, isCombined);
    url = SEARCHPEOPLEFREE_QUERY_URL_PHONE;
    query = num;
    experimentalInput(url, name, num, query, isCombined);

    url = TRUEPEOPLESEARCH_QUERY_URL_NAME;
    isCombined = false;
    query = name;
    experimentalInput(url, name, num, query, isCombined);
    url = TRUEPEOPLESEARCH_QUERY_URL_PHONE;
    query = num;
    experimentalInput(url, name, num, query, isCombined);
}


//handlers and things passed to other functions
void queryNameNumber(std::string url) {
    std::string name = askName();
    std::string num = askNum();

    searchUrl(url, name + "+" + num);
}

void queryName(std::string url) {
    std::string name = askName();

    searchUrl(url, name);
}

void queryNumber(std::string url) {
    std::string num = askNum();

    searchUrl(url, num);
}

void experimentalInput(std::string url, std::string name, std::string num, std::string query, bool isCombined) {
    if (url == WHITEPAGES_QUERY_URL_NAME) { //whitepages takes - for space char because they suck
        std::replace(query.begin(), query.end(), ' ', '-');
        printf((url + query + "\n").c_str());
        system(("start " + url + query).c_str());

        return;
    }

    if (!isCombined) {

        std::replace(query.begin(), query.end(), ' ', '+');
        system(("start " + url + query).c_str());
        printf((url + query + "\n").c_str());
        return;
    }

    query = name + "+" + num;
    std::replace(query.begin(), query.end(), ' ',  '+');
    printf((url + query + "\n").c_str());
    system(("start " + url + query).c_str());
}

void handleOption(OPTION option) {
    switch (option) {
    case Exit:
        running = false;
        break; //unnecessary but still

    case Facebook:
        facebook();
        break;

    case Twitter:
        twitter();
        break;
        
    case Whitepages:
        whitepages();
        break;

    case Google:
        google();
        break;

    case SearchPeopleFree:
        searchpeoplefree();
        break;

    case TruePeopleSearch:
        truepeoplesearch();
        break;

    case Experimental:
        experimental();
        break;

    case About:
        printf("\npuh\n");
        break;

    case Other:
        otherStuff();
        break;
    }
}

void otherStuff() {
    printf("\033[0;32m\n"
        "___  ___                     _          __  ___\n"
        "|  \\/  |                    | |        / _|/ __|\n"
        "| \\  / | ___  _ __ ___   ___| |_ _   _| |_| |_\n"
        "| |\\/| |/ _ \\| '__/ _ \\ / __| __| | | |  _|  _|\n"
        "| |  | | (_) | | |  __  \\__ \\ |_| |_| | | | |\n"
        "|_|  |_|\\___/|_|  \\___| |___/\\__|\\____|_| |_|\n"
        "Still ©2024 Inf Potentiality\n");

    while (running) {
        std::cout << ("\033[1;m\n"
            "==============================\n"
            "\033[1;34m\n"
            "1. DoS-ish\n"
            "2. Network Discovery Off\n"
            "3. Network Discovery On\n"
            "\033[1;m\n"
            "==============================\n\n"
            "\033[1;36m 99. About\033[1;33m 0. Exit\033[1;m\n\n"
            );

        printf("Select service: ");
        int option_num;
        std::cin >> option_num;

        OTHEROPTION option = static_cast<OTHEROPTION>(option_num);

        handleOtherOption(option);
    }
    
}

void handleOtherOption(OTHEROPTION option) {
    switch (option) {
    case Exit: 
        running = false;
        break;
    case DoS:
        break;
    case NetworkDiscoveryOff:
        break;
    case NetworkDiscoveryOn:
        break;
    case About:
        printf("\nsame diff but with cooler shi\n");
        break;
    }
}

std::string askName() {
    std::string name;

    std::cout << "What is their name?: ";
    std::getline(std::cin >> std::ws, name);

    return name;
}

std::string askNum() {
    std::string input;

    std::cout << "What is their number?: ";
    std::getline(std::cin >> std::ws, input);

    return input;
}

void searchUrl(std::string url, std::string query) {
    std::replace(query.begin(), query.end(), ' ',  '+');
    system(("start " + url + query).c_str());
}

void cleanup() {
    printf("Thank you!");
}