#include "Request.h"
#include <Arduino.h>
#include <Client.h>

int parseRequestSafe(String requestString, Request &request);
String buildSuccessfulResponse(const Request &request, const String &html);
String buildHTML(const String &header, const String &body);
String buildNotFoundResponse(const Request &request);
String buildTag(const String &tag, const String &content);
String listenClient(Client& client);
