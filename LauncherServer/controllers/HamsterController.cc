#include "HamsterController.h"

bool _protocolVersionCheck(const Json::Value &val, const std::string &version)
{
	Json::Value jversion = val.get("protocol_version", "0.0.0");
	if (jversion.asString() == version)
	{
		return true;
	}
	else
	{
		return false;
	}
}




void HamsterController::test(const HttpRequestPtr& req, std::function<void(const HttpResponsePtr&)>&& callback)
{
	HttpResponsePtr resp = HttpResponse::newHttpResponse();
	resp->setBody("<h1>HamsterLauncherServer is up and running!!!</h1>");

	callback(resp);
}

void HamsterController::postTest(const HttpRequestPtr& req, std::function<void(const HttpResponsePtr&)>&& callback)
{
	HttpResponsePtr resp = HttpResponse::newHttpResponse();
	std::stringstream ss;
	ss << req->getBody();
	resp->setBody(ss.str());
	callback(resp);
}

void HamsterController::UserLogin(const HttpRequestPtr& req, std::function<void(const HttpResponsePtr&)>&& callback)
{
	/*std::shared_ptr<Json::Value> jval = req->jsonObject();
	//Json::Value *jval = req->jsonObject().get();

	Json::FastWriter fastWriter;
	std::string output = fastWriter.write(*jval);

	std::cout << output << std::endl;

	Json::Value::Members members = jval->getMemberNames();
	Json::Value::Members::iterator it = members.begin();
	std::cout << "MemberList: \n";
	for (; it != members.end(); it++)
	{
		std::cout << *it << (it == members.end() ? "\n" : ", ");
	}
	std::cout << std::endl;

	Json::Value defaultVal(Json::ValueType::stringValue);
	defaultVal = "UNDEFINED";
	Json::Value pv = jval->get("protocol_version", defaultVal);
	std::cout << pv.asString() << std::endl;

	Json::Value undef = jval->get("kek", defaultVal);
	std::cout << undef.asString() << std::endl;

	Json::Value arr = jval->get("data", Json::ValueType::arrayValue);
	Json::Value::iterator it2 = arr.begin();
	std::cout << "data: \n";
	for (; it2 != arr.end(); it2++)
	{
		std::cout << *it2 << ", ";
	}
	std::cout << std::endl;*/

	const char* protocol_ver = "0.0.1";

	std::shared_ptr<Json::Value> jval = req->jsonObject();

	//prepare json response object with protocol version
	Json::Value jresp(Json::ValueType::objectValue);
	jresp["protocol_version"] = protocol_ver;

	if (_protocolVersionCheck(*jval.get(), protocol_ver))
	{
		Json::Value jdata = jval->get("data", Json::ValueType::objectValue);
		Json::Value juser = jdata.get("username", Json::ValueType::stringValue);
		Json::Value jpwd = jdata.get("password", Json::ValueType::stringValue);

		if (juser.asString() == "")
		{
			jresp["type"] = "rejected";
			jresp["error"] = 1;		//error code to be added later (Login error: no/ wrong username)
		}
		else
		{
			if (jpwd.asString() == "")
			{
				jresp["type"] = "rejected";
				jresp["error"] = 1;		//error code to be added later (Login error: no/ wrong password)
			}
			else
			{
				std::cout << "User login attempt as \"" << juser.asString() << "\" from " << req->peerAddr().toIp() << " with password \"" << jpwd.asString() << "\"." << std::endl;

				jresp["type"] = "accepted";

				Json::Value jdata_result(Json::ValueType::objectValue);
				jdata_result["auth_token"] = "TOKEN";
				jdata_result["uuid"] = "UUID";

				jresp["data"] = jdata_result;
			}
		}

		
	}
	
	callback(HttpResponse::newHttpJsonResponse(jresp));
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
