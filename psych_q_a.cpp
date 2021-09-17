#include<iostream>
using namespace std;

class Questions
{
    public:
    int ans1,ans2,ans3,ans4,ans5,ans6,ans7,ans8,ans9,ans10;
    int final;
    void ques1()
    {
        int ans;
        cout<<"\n";
        cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
        cout<<"@@@@@@@@@@@@ANSWER ALL THE QUESTIONS HONESTLY!@@@@@@@@@";
        cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
        cout<<"\n";
        cout<<"\n**********Question 1**********"<<endl;
        cout<<"When Do You Feel Your Best?"<<endl;
        cout<<"(1)in the morning"<<endl;
        cout<<"(2)during the afternoon & early evening"<<endl;
        cout<<"(3)late at night"<<endl;
        cout<<"Enter your Choice:"<<endl;
        cin>>ans;
        switch(ans)
        {
            case 1:
                ans1=2;
                break;
        
            case 2:
                ans1=4;
                break;
                
            case 3:    
                ans1=6;
                break;
        }

    }

    void ques2()
    {
        int ans;
        cout<<"\n**********Question 2**********"<<endl;
        cout<<"2.You usually walk:"<<endl;
        cout<<"(1) fairly fast, with long steps"<<endl;
        cout<<"(2) fairly fast, with short, quick steps"<<endl;
        cout<<"(3) less fast head up, looking the world in the face"<<endl;
        cout<<"(4) less fast, head down"<<endl;
        cout<<"(5) very slowly"<<endl;
        cout<<"Enter your Choice:"<<endl;
        cin>>ans;
        switch(ans)
        {
            case 1:
                ans2=6;
                break;
            case 2:
                ans2=4;
                break;
            case 3:
                ans2=7;
                break;
            case 4:
                ans2=2;
                break;
            case 5:    
                ans2=1;
                break;
        }

    }

    void ques3()
    {
        int ans;
        cout<<"\n**********Question 3**********"<<endl;
        cout<<"3. When talking to people you:"<<endl;
        cout<<"(1) stand with your arms folded"<<endl;
        cout<<"(2) have your hands clasped"<<endl;
        cout<<"(3) have one or both your hands on your hips"<<endl;
        cout<<"(4) touch or push the person to whom you are talking"<<endl;
        cout<<"(5) play with your ear, touch your chin, or smooth your hair"<<endl;
        cout<<"Enter your Choice:"<<endl;
        cin>>ans;
        switch(ans)
        {
            case 1:
                ans3=4;
                break;
            case 2:
                ans3=2;
                break;
            case 3:
                ans3=5;
                break;
            case 4:
                ans3=7;
                break;
            case 5:
                ans3=6;
                break;
        }    
    }

    void ques4()
    {
        int ans;
        cout<<"\n**********Question 4**********"<<endl;
        cout<<"4. When relaxing, you sit with"<<endl;
        cout<<"(1) your knees bent with your legs neatly side by side"<<endl;
        cout<<"(2) your legs crossed"<<endl;
        cout<<"(3) your legs stretched out and straight"<<endl;
        cout<<"(4) one leg curled under you"<<endl;
        cout<<"Enter your Choice:"<<endl;
        cin>>ans;
        switch(ans)
        {
            case 1:
                ans4=4;
                break;
            case 2:
                ans4=6;
                break;
            case 3:
                ans4=2;
                break;
            case 4:
                ans4=1;
                break;
        }
        
    }

    void ques5()
    {
        int ans;
        cout<<"\n**********Question 5**********"<<endl;
        cout<<"5. When something really amuses you, you react with:"<<endl;
        cout<<"(1) a big, appreciative laugh"<<endl;
        cout<<"(2) a laugh, but not a loud one"<<endl;
        cout<<"(3) a quiet chuckle"<<endl;
        cout<<"(4) a sheepish smile"<<endl;
        cout<<"Enter your Choice:"<<endl;
        cin>>ans;
        switch(ans)
        {
            case 1:
                ans5=6;
            case 2:
                ans5=4;
            case 3:
                ans5=3;
            case 4:
                ans5=5;
        }
    }

    void ques6()
    {
        int ans;
        cout<<"\n**********Question 6**********"<<endl;
        cout<<"6. When you go to a party or social gathering you:"<<endl;
        cout<<"(1) make a loud entrance so everyone notices you"<<endl;
        cout<<"(2) make a quiet entrance so everyone notices you"<<endl;
        cout<<"(3) make the quietest entrance, trying to stay unnoticed"<<endl;
        cout<<"Enter your Choice:"<<endl;
        cin>>ans;
        switch(ans)
        {
            case 1:
                ans6=6;
                break;
            case 2:
                ans6=4;
                break;
            case 3:
                ans6=3;
                break;
        }
    }
    
    void ques7()
    {
        int ans;
        cout<<"\n**********Question 7**********"<<endl;
        cout<<"7. You're working very hard and you're interrupted \nDo you:"<<endl;
        cout<<"(1) welcome the break"<<endl;
        cout<<"(2) feel extremely irritated"<<endl;
        cout<<"(3) vary between these two extremes"<<endl;
        cout<<"Enter your Choice:"<<endl;
        cin>>ans;
        switch(ans)
        {
            case 1:
                ans7=6;
                break;
            case 2:
                ans7=2;
                break;
            case 3:
                ans7=4;
                break;
        }    
    }

    void ques8()
    {
        int ans;
        cout<<"\n**********Question 8**********"<<endl;
        cout<<"8. Which of the following colors do you like the most?"<<endl;
        cout<<"(1) red or orange"<<endl;
        cout<<"(2) black"<<endl;
        cout<<"(3) yellow or light blue"<<endl;
        cout<<"(4) green"<<endl;
        cout<<"(5) dark blue or purple"<<endl;
        cout<<"(6) white"<<endl;
        cout<<"(7) brown or gray"<<endl;
        cout<<"Enter your Choice:"<<endl;
        cin>>ans;
        switch(ans)
        {
            case 1:
                ans8=6;
                break;
            case 2:
                ans8=7;
                break;
            case 3:
                ans8=5;
                break;
            case 4:
                ans8=4;
                break;
            case 5:
                ans8=3;
                break;
            case 6:
                ans8=2;
                break;
            case 7:
                ans8=1;
                break;
        }
    }

    void ques9()
    {
        int ans;
        cout<<"\n**********Question 9**********"<<endl;
        cout<<"9. In those last few moments before going to sleep,\nYou lie.."<<endl;
        cout<<"(1) stretched out on your back"<<endl;
        cout<<"(2) stretched out face down on your stomach"<<endl;
        cout<<"(3) on your side, slightly curled"<<endl;
        cout<<"(4) with your head on one arm"<<endl;
        cout<<"(5) with your head under the covers"<<endl;
        cout<<"Enter your Choice:"<<endl;
        cin>>ans;
        switch(ans)
        {
            case 1:
                ans9=7;
                break;
            case 2:
                ans9=6;
                break;
            case 3:
                ans9=4;
                break;
            case 4:
                ans9=2;
                break;
            case 5:
                ans9=1;
                break;
        }
    }

    void ques10()
    {
        int ans;
        cout<<"\n**********Question 10**********"<<endl;
        cout<<"10. You often dream that you are..."<<endl;
        cout<<"(1) falling"<<endl;
        cout<<"(2) fighting or struggling"<<endl;
        cout<<"(3) searching for something or somebody"<<endl;
        cout<<"(4) flying or floating"<<endl;
        cout<<"(5) you usually have dreamless sleep"<<endl;
        cout<<"(6) your dreams are always pleasant"<<endl;
        cout<<"Enter your Choice:"<<endl;
        cin>>ans;
        switch(ans)
        {
            case 1:
                ans10=4;
                break;
            case 2:
                ans10=2;
                break;
            case 3:
                ans10=3;
                break;
            case 4:
                ans10=5;
                break;
            case 5:
                ans10=6;
                break;
            case 6:
                ans10=1;
                break;
        }
    }
    
    void display()
    {
        final=ans1+ans2+ans3+ans4+ans5+ans6+ans7+ans8+ans9+ans10;
        cout<<"\n**********Score***********="<<final<<endl;
        if(final>60)
        {
            cout<<"\nOthers see you as somebody they should handle with care" <<endl;
            cout<<"You're seen as vain, self-centered, and who is extremely dominant."<<endl;
            cout<<"Others may admire you, wishing they could be more like you, but don't always trust you,";
            cout<<"hesitating to become too deeply involved with you."<<endl;
        }
        else if((final>51) && (final<=61))
        {
            cout<<"\nOthers see you as an exciting, highly volatile, rather impulsive personality;";
            cout<<"a natural leader, who's quick to make decisions, though not always the right ones."<<endl; 
            cout<<"They see you bold and adventuresome, someone who will try anything once;"; 
            cout<<"someone who takes chances and enjoys adventure."<<endl;
            cout<<"They enjoy being in your company because of the excitement you radiate."<<endl;
        }
        else if((final>41) && (final<=51))
        {
            cout<<"\nOthers see you as fresh, lively, charming, amusing, and always interesting;";
            cout<<"someone who's constantly in the center of attention, but sufficiently well-balanced not to let it go to their head."<<endl;
            cout<<"They also see you as kind, considerate, and understanding; someone who'll always cheer them up and help them out."<<endl;
        }
        else if((final>31) && (final<=41))
        {
            cout<<"\nOthers see you as sensible, cautious, careful and practical."<<endl;
            cout<<"They see you as clever, gifted, or talented, but modest."<<endl;
            cout<<"Not a person who makes friends too quickly or easily,";
            cout<<"but someone who's extremely loyal to friends you do make and who expect the same loyalty in return."<<endl;
            cout<<"Those who really get to know you realize it takes a lot to shake your trust in your friends,";
            cout<<"but equally that it takes you a long time to get over it if that trust is ever broken."<<endl;
        }
        else if((final>21) && (final<=31))
        {
            cout<<"\nYour friends see you as painstaking and fussy."<<endl;
            cout<<"They see you as very cautious, extremely careful... A slow and steady plodder."<<endl;
            cout<<"It'd really surprise them if you ever did something impulsively or on the spur of the moment,";
            cout<<"expecting you to examine everything carefully from every angle and then, usually decide against it."<<endl;
            cout<<"They think this reaction is caused partly by your careful nature."<<endl;
        }
        else if(final<21)
        {
            cout<<"\nPeople think you are shy, nervous, and indecisive someone who needs looking after,";
            cout<<"who always wants someone else to make the decisions and who doesn't want to get involved with anyone or anything."<<endl;
            cout<<"They see you as a worrier who always sees problems that don't exist."<<endl;
            cout<<"Some people think you're boring."<<endl;
            cout<<"Only those who know you well know that you aren't."<<endl;
        }
        else
        {
            cout<<"\nNo output"<<endl;
        }
    }
};

int main()
{
    Questions q;
    q.ques1();
    q.ques2();
    q.ques3();
    q.ques4();
    q.ques5();
    q.ques6();
    q.ques7();
    q.ques8();
    q.ques9();
    q.ques10();
    q.display();
}