#include "HamsterController.h"

void HamsterController::test(const HttpRequestPtr& req, std::function<void(const HttpResponsePtr&)>&& callback)
{
	HttpResponsePtr resp = HttpResponse::newHttpResponse();
	resp->setBody("<h1>HamsterLauncherServer is up and running!!!</h1>");

	callback(resp);
}

void HamsterController::UserLogin(const HttpRequestPtr& req, std::function<void(const HttpResponsePtr&)>&& callback)
{

}
