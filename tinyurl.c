/*
 * =====================================================================================
 *
 *       Filename:  tinyurl.c
 *
 *    Description:  return a shorter version of the url
 *
 *        Version:  1.0
 *        Created:  11/01/2020 02:16:07 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  John C. De Armas (), var.mail.john@gmail.com
 *   Organization:
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <curl/curl.h>

int main( int argc, char* argv[]){

    /* data */
    char url[8192];
    char* api = "http://tinyurl.com/api-create.php?url=";
makefile
    /* text */
    strncpy(url, api, strnlen(api, 40));
    strncat(url, argv[1], 8152);

    /* set up curl */
    CURL *easy_handle = NULL;
    CURLcode res;
    easy_handle = curl_easy_init();

    /* perform post */
    if(easy_handle){
        curl_easy_setopt(easy_handle, CURLOPT_URL, url);
        res = curl_easy_perform(easy_handle);
        printf("\n");
        curl_easy_cleanup(easy_handle);
    }

    return EXIT_SUCCESS;
}
