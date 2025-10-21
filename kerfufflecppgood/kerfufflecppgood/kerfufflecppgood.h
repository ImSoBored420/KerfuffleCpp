#ifndef H_MAIN //if this isn't defined
#define H_MAIN //define it

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdio.h>

enum OPTION {
    Exit, //enum is 0-whatever

    Facebook,
    Twitter,
    Whitepages,
    Google,
    USPhoneLookup,
    SearchPeopleFree,
    TruePeopleSearch,

    Experimental = 98,
    About = 99,
    Other = 100
};

enum OTHEROPTION {

    DoS = 1

};

const std::string FACEBOOK_QUERY_URL = "https://www.facebook.com/search/top/?q=";
const std::string TWITTER_QUERY_URL = "https://twitter.com/search?q=";
const std::string WHITEPAGES_QUERY_URL_NAME = "https://www.whitepages.com/name/";
const std::string WHITEPAGES_QUERY_URL_PHONE = "https://www.whitepages.com/phone/";
const std::string GOOGLE_QUERY_URL = "https://www.google.com/search?q=";
const std::string SEARCHPEOPLEFREE_QUERY_URL_NAME = "https://www.searchpeoplefree.com/find/";
const std::string SEARCHPEOPLEFREE_QUERY_URL_PHONE = "https://www.searchpeoplefree.com/phone-lookup/find/";
const std::string TRUEPEOPLESEARCH_QUERY_URL_NAME = "https://www.truepeoplesearch.com/results?name=";
const std::string TRUEPEOPLESEARCH_QUERY_URL_PHONE = "https://www.truepeoplesearch.com/resultphone?phoneno=";

bool running = true;

void facebook();
void twitter();
void whitepages();
void google();
void searchpeoplefree();
void truepeoplesearch();
void experimental();
//new things go here

void handleOption(OPTION option);

std::string askName();
std::string askNum();

void queryNameNumber(std::string url);
void queryName(std::string url);
void queryNumber(std::string url);
void experimentalInput(std::string url, std::string name, std::string num, std::string query, bool isCombined);

void searchUrl(std::string url, std::string query);

void cleanup();


#endif H_MAIN //ensures only one instance of this code being run, since it ends if the previously defined thing exists