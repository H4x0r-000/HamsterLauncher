#include "HamsterController.h"

void HamsterController::test(const HttpRequestPtr& req, std::function<void(const HttpResponsePtr&)>&& callback)
{
	HttpResponsePtr resp = HttpResponse::newHttpResponse();
	resp->setBody("<h1>HamsterLauncherServer is up and running!!!</h1>");

	callback(resp);
}

void HamsterController::UserLogin(const HttpRequestPtr& req, std::function<void(const HttpResponsePtr&)>&& callback)
{
	std::shared_ptr<Json::Value> jval = req->jsonObject();

	Json::FastWriter fastWriter;
	std::string output = fastWriter.write(*jval);

	std::cout << output << std::endl;

	callback(HttpResponse::newHttpResponse());
}

void HamsterController::UserGetUUID(const HttpRequestPtr& req, std::function<void(const HttpResponsePtr&)>&& callback)
{
}

void HamsterController::GetUUIDfromPlayerUsername(const HttpRequestPtr& req, std::function<void(const HttpResponsePtr&)>&& callback, std::string&& username)
{
}

void HamsterController::UserSetStats(const HttpRequestPtr& req, std::function<void(const HttpResponsePtr&)>&& callback)
{
}

void HamsterController::GetGamesList(const HttpRequestPtr& req, std::function<void(const HttpResponsePtr&)>&& callback, std::string&& os_filter, std::string&& mp_filter)
{
}

void HamsterController::GetGameInfo(const HttpRequestPtr& req, std::function<void(const HttpResponsePtr&)>&& callback, std::string&& gameId)
{
}

void HamsterController::GetAllPlayers(const HttpRequestPtr& req, std::function<void(const HttpResponsePtr&)>&& callback)
{
}

void HamsterController::GetPlayerStats(const HttpRequestPtr& req, std::function<void(const HttpResponsePtr&)>&& callback, std::string&& uuid)
{
}

void HamsterController::GetPlayerProfile(const HttpRequestPtr& req, std::function<void(const HttpResponsePtr&)>&& callback, std::string&& uuid)
{
}
