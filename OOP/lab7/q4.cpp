/*
4. Create a C++ program to exemplify multiple inheritance and ambiguity
resolution in a multimedia player hierarchy. Define classes AudioPlayer,
VideoPlayer, and MediaPlayer. Both base classes have a shared attribute
contentType. Your task is to demonstrate how to handle ambiguity using
scope resolution.
AudioPlayer Class:
• Base class with contentType attribute and method
playAudio() prints "Playing audio content."
VideoPlayer Class:
• Base class with contentType attribute and method
playVideo() prints "Playing video content."
MediaPlayer Class:
• Derived from AudioPlayer and VideoPlayer and method
playMedia() prints "Playing media." Write a program that:
a. Creates a MediaPlayer instance and assigns contentType for audio
and video and demonstrates ambiguity resolution with proper
method calls.
*/

#include <iostream>
#include <string>
using namespace std;

class AudioPlayer {
protected:
    string contentType;

public:
    AudioPlayer(string type) {
        contentType = type;
    }
    void playAudio() {
        cout << "Playing " << contentType << " content" << endl;
    }
};

class VideoPlayer {
protected:
    string contentType;

public:
    VideoPlayer(string type) {
        contentType = type;
    }

    void playVideo() {
        cout << "Playing " << contentType << " content" << endl;
    }
};

class MediaPlayer : public AudioPlayer, public VideoPlayer {
public:
    MediaPlayer(string audioType, string videoType) : AudioPlayer(audioType), VideoPlayer(videoType) {
    }
    void playMedia() {
        AudioPlayer::playAudio();
        VideoPlayer::playVideo();
        cout << "Playing media content" << endl;
    }
};

int main() {
    MediaPlayer player("FLAC", "MKV");

    player.playMedia();
    return 0;
}

/*
SAMPLE OUTPUT:
Playing FLAC content
Playing MKV content
Playing media content
*/