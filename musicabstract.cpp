#include<iostream>
using namespace std;

        class Music 
            {
                public:
                virtual void bass() = 0;
                void play(){cout<<"Playing music....."<<endl;}

            };

        class MusicDevice : public Music{
               
               public:
                void bass(){cout<<"Extra Bass...."<<endl;}
            };

        class MusicPlayer
        {
                MusicDevice md;
                public:
                void StartMusic()
                {
                    md.play();
                    md.bass();
                }

        };



        int main(){
            MusicPlayer mp;
            mp.StartMusic();


            return 0;
        }