class Solution 
{
public:
    int romanToInt(std :: string s) 
    {   
        int k = 0;
        for (int i = 0; i < s.size(); i++)
        { std::cout<< s[i];
            switch ( (s[i]))
            {
                case 'M':
                   { k += 1000;
                    break;}
                case 'D':{
                    k += 500;
                    break;}
                case 'C':
                    if (s[i + 1] == 'M')
                     {
                            k += 900;
                            i++;
                            break;
                        }
                    else if (s[i + 1] == 'D')
                     {
                            k += 400;
                            i++;
                            break;
                        }
                    else 
                    {
                        k += 100;
                        break;
                    }
                case 'L':{
                    k += 50;
                    break;}

                case 'X':
                    if (s[i + 1] == 'C' )
                    {
                            k += 90;
                            i++;
                            break;
                        }
                    else if (s[i + 1] == 'L')
                     {
                            k += 40;
                            i++; break;
                        }
                    else
                    {
                        k += 10; break;
                    }
                case 'V':{
                    k += 5; break;}
                case 'I':
                    if  (s[i + 1] == 'X')
                     {
                            k += 9;
                            i++;break;
                        }
                    else if (s[i + 1] == 'V' )
                    {
                            k += 4;
                            i++; break;
                        }
                    else
                     {
                        k += 1;
                        break;
                    }
                
                }
        } 
     return k;
     exit(0);
    }

};