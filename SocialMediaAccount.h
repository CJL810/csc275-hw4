/*************************************************************************
** Author: Cameron Lomax
** Program: HW4
** Date Created: November 19, 2021
** Date Last Modified : November 22, 2021
** Usage: No command line arguments
** Problem:
- Create a social media program that shows and followers and other things
using templates
*************************************************************************/

#ifdef HOMEWORK4_SOCIALMEDIAACCOUNT_H
#define HOMEWORK4_SOCIALMEDIAACCOUNT_H
#include<iostream>

using namespace std;

const int maxFollowers = 1000;
const int maxFollowed - 1000;

template<class T>
class SocialMediaAccount {
    public:
        SocialMediaAccount(T handler) {
            this ->handler = handler;
            this ->followerCount = 0;
            this ->followedCount = 0;
            this ->privacy = true;
            followers = new T[maxFollowers];
            followed = new T[maxFollowed];
        }
        void setfollowerCount(int n){this->followerCount = n;}
        void setHandler(T user){this->handler = user;}
        T getHandler(){return this->handler;}
        void setfollowedCount(int n){this->followedCount = n;}
        bool getPrivacy(){return this->privacy;}
        void setPrivacy(bool privacy){this->privacy = privacy;}
        int getfollowedCount(){return this->followerCount;}
        
        void addFollower(T user){
            if (this->followerCount < maxFollowers)
            {
                followers[followerCount] = user;
                this->followerCount++;
            }
        }
        
        void addFollowed(T user){
            if (!this->followedCount < maxFollowed)
            {
                followed[followedCount] = user;
                this->followedCount++;
            }
        }

        void displayFollowers(){
            if (!this->privacy)
            {
                for (int i = 0; i < this->followerCount; i++)
                {
                    cout<<followers[i]<< " ";
                }
                cout<<endl; 
            }
            else{
                cout<<"This account is private."<<endl;
            }
        }

        void displayFollowed(){
            if (!this->privacy)
            {
                for (int i = 0; i < this->followedCount; i++)
                {
                    cout<<followed[i]<<" ";
                }
                cout<<endl;
            }
            else{
                cout<<"This account is private."<<endl;
            }
            
        }
    private:
        T handler;
        T* followers;
        T* followed;
        bool privacy;
        int followerCount;
        int followedCountl;
};

class Twitter : public SocialMediaAccount {
    public:
        int retweetCount;
        int setretweetCount(){}
        int getretweetCount(){return retweetCount;}

        void RT() {
            for (int i = 0; i < retweetCount; i++)
            {
                setretweetCount(i++);
            }
            
        }

};

class Instagram : public SocialMediaAccount {
    public:
        int likeCount;
        int setlikeCount;
        int getlikeCount;

        void Like() {
            for (int i = 0; i < likeCount; i++)
            {
                setlikeCount(i++);
            }
        }
};

#endif //HOMEWORK4_SOCIALMEDIAACCOUNT_H