class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
    int sum = 0, cnt = 0, l, ll, hh, h;
    for (int i = low; i < high + 1; i++)
    {
        if (i < 100)
        {
            l = i / 10;
            h = i % 10;
            if (l == h)
                cnt++;
        }
        else if (i < 10000 && i > 1000)
        {
            l = i / 1000;
            h = i % 10;
            ll = i / 100;
            ll = ll % 10;
            hh = i % 100;
            hh = hh / 10;
            if (l + ll == hh + h)
                cnt++;
        }
    }
            return cnt;
    }
};
