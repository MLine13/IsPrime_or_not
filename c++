bool MPrime(int number)
{
    bool result = true;


    for(int i = 2 ; i < sqrt(number) + 1 ; i++){
        if(number % i == 0)
            result = false;
    }
    return result;
}
