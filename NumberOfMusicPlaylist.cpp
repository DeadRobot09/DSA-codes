//Your music player contains n different songs. You want to listen to goal songs (not necessarily different) during your trip. To avoid boredom, you will create a playlist so that:
//•	Every song is played at least once.
//•	A song can only be played again only if k other songs have been played.
//Given n, goal, and k, return the number of possible playlists that you can create. Since the answer can be very large, return it modulo 109 + 7.
class Solution {
public:
    int numMusicPlaylists(int N, int goal, int k) {
        
        const int mod = 1e9 + 7;
        vector<vector < long long >> dp(goal+1, vector<long long>(N+1, 0));
        dp[0][0] = 1;

        for(int i =1; i<= goal; ++i){
            for(int j = 1; j<= N; ++j){
                dp[i][j] = (dp[i][j] + dp[i-1][j-1]*(N - j + 1))%mod;
                dp[i][j] = (dp[i][j] + dp[i-1][j]*max(j-k,0))%mod;
                

            }
        } 
        return dp[goal][N];

    }
};
