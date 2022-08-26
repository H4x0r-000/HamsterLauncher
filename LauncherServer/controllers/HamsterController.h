#pragma once

#include <drogon/HttpController.h>

using namespace drogon;

class HamsterController : public HttpController<HamsterController>
{
public:
    METHOD_LIST_BEGIN
        // use METHOD_ADD to add your custom processing function here;
        // METHOD_ADD(TestContrller2::get, "/{2}/{1}", Get); // path is /TestContrller2/{arg2}/{arg1}
        // METHOD_ADD(TestContrller2::your_method_name, "/{1}/{2}/list", Get); // path is /TestContrller2/{arg1}/{arg2}/list
        // ADD_METHOD_TO(TestContrller2::your_method_name, "/absolute/path/{1}/{2}/list", Get); // path is /absolute/path/{arg1}/{arg2}/list
        
        
        //ADD_METHOD_TO(HamsterController::test, "/kek/{2}/{1}", Get);
        //ADD_METHOD_VIA_REGEX(HamsterController::dyn, "/dyn/(.*)", Get);
        //ADD_METHOD_TO(HamsterController::toggleFilter, "/toggle_filter", Get);
        //ADD_METHOD_TO(HamsterController::filterLogic, "/filter", "TestFilter", Get);
        ADD_METHOD_TO(HamsterController::test, "/test", Get);
        ADD_METHOD_TO(HamsterController::postTest, "/posttest", Post);

        ADD_METHOD_TO(HamsterController::UserLogin, "/login", Post);
        ADD_METHOD_TO(HamsterController::UserGetUUID, "/getuuid", Post);

        ADD_METHOD_TO(HamsterController::GetUUIDfromPlayerUsername, "/getuuid/{username}", Get);
        ADD_METHOD_TO(HamsterController::UserSetStats, "/setstatus", Post);

        ADD_METHOD_TO(HamsterController::GetGamesList, "/gameslist?filter_os={os}&filter_multiplayer={mp}", Get);
        ADD_METHOD_TO(HamsterController::GetGameInfo, "/game/{id}", Get);

        ADD_METHOD_TO(HamsterController::GetAllPlayers, "/player/all", Get);
        ADD_METHOD_TO(HamsterController::GetPlayerStats, "/player/{uuid}/stats", Get);
        ADD_METHOD_TO(HamsterController::GetPlayerProfile, "/player/{uuid}/profile", Get);
    METHOD_LIST_END
        // your declaration of processing function maybe like this:
        // void get(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback, int p1, std::string p2);
        // void your_method_name(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback, double p1, int p2) const;



    void test(const HttpRequestPtr& req,
        std::function<void(const HttpResponsePtr&)>&& callback);
    void postTest(const HttpRequestPtr& req,
        std::function<void(const HttpResponsePtr&)>&& callback);



    void UserLogin(const HttpRequestPtr& req,
        std::function<void(const HttpResponsePtr&)>&& callback);

    void UserGetUUID(const HttpRequestPtr& req,
        std::function<void(const HttpResponsePtr&)>&& callback);


    
    void GetUUIDfromPlayerUsername(const HttpRequestPtr& req,
        std::function<void(const HttpResponsePtr&)>&& callback, std::string &&username);
    
    void UserSetStats(const HttpRequestPtr& req,
        std::function<void(const HttpResponsePtr&)>&& callback);



    void GetGamesList(const HttpRequestPtr& req,
        std::function<void(const HttpResponsePtr&)>&& callback, std::string &&os_filter, std::string &&mp_filter);

    void GetGameInfo(const HttpRequestPtr& req,
        std::function<void(const HttpResponsePtr&)>&& callback, std::string &&gameId);



    void GetAllPlayers(const HttpRequestPtr& req,
        std::function<void(const HttpResponsePtr&)>&& callback);

    void GetPlayerStats(const HttpRequestPtr& req,
        std::function<void(const HttpResponsePtr&)>&& callback, std::string &&uuid);

    void GetPlayerProfile(const HttpRequestPtr& req,
        std::function<void(const HttpResponsePtr&)>&& callback, std::string &&uuid);


    /*void test(const HttpRequestPtr& req,
        std::function<void(const HttpResponsePtr&)>&& callback,
        const std::string& first,
        const std::string& second);*/
};
