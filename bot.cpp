#include "sleepy_discord/websocketpp_websocket.h"

class myClientClass : public SleepyDiscord::DiscordClient {
public:
    using SleepyDiscord::DiscordClient::DiscordClient;
    void onMessage(SleepyDiscord::Message message) {
        if (message.startsWith("+test"))
            sendMessage(message.channelID, "Test succesful!");
    }
};

int main() {
    myClientClass client("token", 2);
    client.run();
}

