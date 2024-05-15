// Write your Student class here
class Student{
    private:
    vector<int>scores;
    
    public:
    void input(){
        int score;
        for(int i=0;i<5;i++){
            cin>>score;
            scores.push_back(score);
        }
    }
    
    int calculateTotalScore(){
        int total=0;
        for(int score : scores){
            total += score;    
        }
        return total;
         
    }
};
