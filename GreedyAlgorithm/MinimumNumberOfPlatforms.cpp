// brute (gives TLE)

// struct train
// {
//     int at;
//     int dt;
//     int visited;
// };

// bool compare(train a, train b);

// int calculateMinPatforms(int at[], int dt[], int n) {
//     // Write your code here.
//     train trains[n];
    
//     for(int i = 0; i < n; ++i)
//     {
//         trains[i].at = at[i];    
//         trains[i].dt = dt[i];
//         trains[i].visited = 0; 
//     }
    
//     sort(trains, trains + n, compare);
    
//     int limit;
//     int flag = 0;
//     int count = 0;
    
//     while(!flag)
//     {
//         flag = 1;
//         limit = -1;
//         for(int i = 0; i < n; ++i)
//         {
//             if(!trains[i].visited)
//             {
//                 if(limit == -1)
//                 {
//                     limit = trains[i].dt;
//                     trains[i].visited = 1;
//                     continue;
//                 }

//                 if(trains[i].at > limit)
//                 {
//                     trains[i].visited = 1;
//                     limit = trains[i].dt;
//                 }
//                 flag = 0;
//             }
//         }
//         count++;
//     }
//     return count;
// }

// bool compare(train a, train b)
// {
//     return a.dt < b.dt;   
// }
