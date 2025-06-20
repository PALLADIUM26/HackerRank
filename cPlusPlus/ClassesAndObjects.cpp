

class Student{
    int scores[5]; 
    public : void input(){
        for (int i = 0; i < 5; i++) {
            cin >> scores[i];
        }
    }
    public : int calculateTotalScore(){
        int s = 0;
        for (int i = 0; i < 5; i++)
            s+=scores[i];
        return s;
    }
};

