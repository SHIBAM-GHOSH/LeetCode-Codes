class Solution {
public:
    double angleClock(int hour, int minutes) 
    {
        double hr_hand  = hour + minutes/60.0;

        double min_hand = minutes*(1/5.0);

        double angle1 = (abs(hr_hand - min_hand)/12)*360;
        double angle2 = 360-angle1;

        double ans = min(angle1, angle2);

        return ans;

    }
};