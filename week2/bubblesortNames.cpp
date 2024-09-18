do{
    i++;
    cout<<"\nenter next name ";
    cin>>name[i];
}while(name[i][0] != 'q'); // cannot break on \0 because arrays are NOT filled
    for(j=1; j<=i; j++)
    {
        for(k=0; k<i; k++)
            {
            if(name[k] < name[k+1]) // first letter of each string
            {
                tmp = name[k];
                name[k] = name[k+1];
                name[k+1]=tmp;
            }
    }
}