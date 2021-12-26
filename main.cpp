/*
Ahmed Arafat
Business Information System
ahmedmoyousry.bis@gmail.com
3-2021
I Can Do This All Day
*/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
typedef std::pair<int, int> pii;
typedef std::pair<ll, ll> pll;
typedef std::pair<std::string, std::string> pss;
typedef std::vector<int> vi;
typedef std::vector<vi> vvi;
typedef std::vector<pii> vii;
typedef std::vector<ll> vl;
typedef std::vector<vl> vvl;
typedef std::map<ll,ll> mpll;
double EPS = 1e-9;
int INF = 1000000005;
long long INFF = 1000000000000000005LL;
double PI = acos(-1);
int dirx[8] = { -1, 0, 0, 1, -1, -1, 1, 1 };
int diry[8] = { 0, 1, -1, 0, -1, 1, -1, 1 };

#ifdef TESTING
#define DEBUG fprintf(stderr, "====TESTING====\n")
#define VALUE(x) cerr << "The value of " << #x << " is " << x << endl
#define debug(...) fprintf(stderr, __VA_ARGS__)
#else
#define DEBUG
#define VALUE(x)
#define debug(...)
#endif

#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define FORN(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))
#define FORD(a, b, c) for (int(a) = (b); (a) >= (c); --(a))
#define FORSQ(a, b, c) for (int(a) = (b); (a) * (a) <= (c); ++(a))
#define FORC(a, b, c) for (char(a) = (b); (a) <= (c); ++(a))
#define FOREACH(a, b) for (auto&(a) : (b))
#define REP(i, n) FOR(i, 0, n)
#define REPN(i, n) FORN(i, 1, n)
#define MAX(a, b) a = max(a, b)
#define MIN(a, b) a = min(a, b)
#define SQR(x) ((LL)(x) * (x))
#define RESET(a, b) memset(a, b, sizeof(a))
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define ALL(v) v.begin(), v.end()
#define ALLA(arr, sz) arr, arr + sz
#define SIZE(v) (int)v.size()
#define SORT(v) sort(ALL(v))
#define REVERSE(v) reverse(ALL(v))
#define SORTA(arr, sz) sort(ALLA(arr, sz))
#define REVERSEA(arr, sz) reverse(ALLA(arr, sz))
#define PERMUTE next_permutation
#define TC(t) while (t--)
#define HANDLE_WRONG_INPUT          while(std::cin.fail()){std::cin.clear();std::cin.ignore();}
#define debug                       printf("I am here\n");
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define scf(n)              scanf("%lf", &n)
#define pfl(x)              printf("%lld\n",x)
#define md                  10000007
#define pb                  push_back
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define pn                  printf("\n")
#define debug               printf("I am here\n")
#define ps                  printf(" ")
/******************************Code Starts Here*********************************************/
using namespace std;

class Chapter3
{
public:
    ///Liquidity Function
    void Liquidity()
    {
        short num;
HERE:
        cout<<"Please Enter : \n(1) For Current Ratio\n(2) For Quick Ratio\n";
        cin>>num;
        if(num == 1)
        {
            cout<<"Please Enter Current Assets\n";
            ld CurAsset, CurLiab, CurRatio;
            cin>>CurAsset;
            cout<<"Please Enter Current Liabilities\n";
            cin>>CurLiab;
            CurRatio = CurAsset/CurLiab;
            cout<<"Current Ratio is : "<<CurRatio<<"\n";
            if(CurRatio >= 1)
            {
                cout<<"Your Current Ratio Is Good As It's Greater Than 1 .. So You Can Cover Your Short Term Liabilities\n";
                cout<<"So For Every 1$ Current Liability There is "<<CurRatio<<"$ Current Asset Which Is Good\n";
            }
            else
            {
                cout<<"Your Current Ratio Is Bad As It's Less Than 1 .. So You Cannot Cover Your Short Term Liabilities\n";
                cout<<"So For Every 1$ Current Liability There is "<<CurRatio<<"$ Current Asset Which Is Bad\n";
            }
        }
        else if(num == 2)
        {
            cout<<"Please Enter Current Asset\n";
            ld CurAsset,Inventory, CurLiab, QuickRatio;
            cin>>CurAsset;
            cout<<"Please Enter Inventory\n";
            cin>>Inventory;
            cout<<"Please Enter Current Liabilities\n";
            cin>>CurLiab;
            QuickRatio = (CurAsset-Inventory)/CurLiab;
            cout<<"Quick Ratio is : "<<QuickRatio<<"\n";
            if(QuickRatio >= 1)
            {
                cout<<"Your Quick Ratio Is Good As It's Greater Than 1 .. So You Can Cover Your Short Term Liabilities\n";
                cout<<"This Means That For Every 1$ Current Liability There is "<<QuickRatio<<"$ Current Asset Minus Inventory Which Is Good\n";
            }
            else
            {
                cout<<"Your Quick Ratio Is Bad As It's Less Than 1 .. So You Cannot Cover Your Short Term Liabilities\n";
                cout<<"This Means That For Every 1$ Current Liability There is "<<QuickRatio<<"$ Current Asset Minus Inventory Which Is Bad\n";
            }
        }
        else
        {
            cout<<"Please Make Sure That You Have Entered (1) OR (2)\n";
            goto HERE;
        }

    }
    ///Activity Function
    void Activity()
    {
        short num;
HERE:
        cout<<"Please Enter : \n(1) Inventory Turnover\n(2) Average Age Of Inventory\n(3) Average Collection Period\n(4) Average Payment Period\n(5) Total Asset Turnover\n";
        cin>>num;
        ld InventoryTurnover;
        if(num == 1 || num == 2)
        {
            if(num == 2) cout<<"We Have To Calculate Inventory Turnover First\n";
            cout<<"Please Enter Cost Of Good Sold\n";
            ld COGS, Inventory;
            cin>>COGS;
            cout<<"Please Enter Inventory\n";
            cin>>Inventory;
            InventoryTurnover = COGS/Inventory;
            if(num == 2)
            {
                ld AverageAgeOfInventory;
                AverageAgeOfInventory = 365/InventoryTurnover;
                cout<<"Average Age Of Inventory is : "<<AverageAgeOfInventory<<"\n";
            }
            else cout<<"Inventory Turnover is : "<<InventoryTurnover<<"\n";
        }
        else if(num == 3)
        {
            cout<<"Please Enter A/R\n";
            ld AR, Sales, AverageCollectionPeriod;
            cin>>AR;
            cout<<"Please Enter Sales\n";
            cin>>Sales;
            AverageCollectionPeriod = AR/(Sales/365);
            cout<<"Average Collection Period is : "<<AverageCollectionPeriod<<"\n";
        }
        else if(num == 4)
        {
            cout<<"Please Enter A/P\n";
            ld AP, PercentOfCOGS, COGS,Purchases, AveragePaymentPeriod;
            cin>>AP;
            cout<<"Please Enter Cost Of Good Sold\n";
            cin>>COGS;
            cout<<"Please Enter Purchases Percent OF Cost Of Good Sold\n";
            cin>>PercentOfCOGS;
            Purchases = COGS * (PercentOfCOGS/100) ;
            AveragePaymentPeriod = AP/(Purchases/365);
            cout<<"Average Payment Period is : "<<AveragePaymentPeriod<<"\n";
        }
        else if(num == 5)
        {
            cout<<"Please Enter Sales\n";
            ld Sales, TotalAssets, TotalAssetsTurnover;
            cin>>Sales;
            cout<<"Please Total Assets\n";
            cin>>TotalAssets;
            TotalAssetsTurnover = Sales/TotalAssets;
            cout<<"Total Assets Turnover is : "<<TotalAssetsTurnover<<"\n";
            cout<<"This Means That For Every 1$ Of Assets , Firm Generates "<<TotalAssetsTurnover<<"$ Of Sales\n";
        }
        else
        {
            cout<<"Please Make Sure That You Have Entered (1) OR (2) OR (3) OR (4) OR (5)\n";
            goto HERE;
        }
    }
    ///Debt Function
    void Debt()
    {
        short num;
HERE:
        cout<<"Please Enter : \n(1) Debt Ratio \n(2) Debt-To-Equity Ratio\n(3) Equity Multiplier (EM)\n(4) Times Interest Earned Ratio \n(5) Fixed-Payment Coverage Ratio (FPCR)\n";
        cin>>num;
        if(num == 1)
        {
            ld TotalLiab, TotalAssets, DebtRatio;
            cout<<"Please Enter Total Liabilities\n";
            cin>>TotalLiab;
            cout<<"Please Enter Total Assets\n";
            cin>>TotalAssets;
            DebtRatio = TotalLiab/TotalAssets;
            cout<<"Debt Ratio is : "<<DebtRatio<<"\n";
        }
        else if(num == 2)
        {
            ld TotalLiab, TotalEquity, DebtToEquity;
            cout<<"Please Enter Total Liabilities\n";
            cin>>TotalLiab;
            cout<<"Please Enter ShareHolder's Equity\n";
            cin>>TotalEquity;
            DebtToEquity = TotalLiab/TotalEquity;
            cout<<"Debt-To-Equity is : "<<DebtToEquity<<"\n";
        }

        else if(num == 3)
        {
            ld TotalEquity, TotalAssets, EquityMultiplier;
            cout<<"Please Enter Total Assets\n";
            cin>>TotalAssets;
            cout<<"Please Enter ShareHolder's Equity\n";
            cin>>TotalEquity;
            EquityMultiplier = TotalAssets/TotalEquity;
            cout<<"Equity Multiplier is : "<<EquityMultiplier<<"\n";
        }
        else if(num == 4)
        {
            ld EBIT, Intrest, TimesInterestEarned;
            cout<<"Please Enter Earnings Before Interest And Taxes\n";
            cin>>EBIT;
            cout<<"Please Enter Interest\n";
            cin>>Intrest;
            TimesInterestEarned = EBIT/Intrest;
            cout<<"Times Interest Earned is : "<<TimesInterestEarned<<"\n";
        }
        else if(num == 5)
        {
            ld EBIT, Intrest,LeasePayments, PrinciplePayments, PreferredStockDividends, Tax, FixedPaymentCoverage ;
            cout<<"Please Enter Earnings Before Interest And Taxes\n";
            cin>>EBIT;
            cout<<"Please Enter Interest\n";
            cin>>Intrest;
            cout<<"Please Enter Lease Payments\n";
            cin>>LeasePayments;
            cout<<"Please Enter Principle Payments\n";
            cin>>PrinciplePayments;
            cout<<"Please Enter Preferred Stock Dividends\n";
            cin>>PreferredStockDividends;
            cout<<"Please Enter Tax\n";
            cin>>Tax;
            FixedPaymentCoverage = (EBIT+LeasePayments)/( Intrest + LeasePayments + ( ( PrinciplePayments + PreferredStockDividends ) * (1/(1-Tax))) );
            cout<<"Fixed-Payment Coverage Ratio (FPCR) is : "<<FixedPaymentCoverage<<"\n";
        }
        else
        {
            cout<<"Please Make Sure That You Have Entered (1) OR (2) OR (3) OR (4) OR (5)\n";
            goto HERE;
        }
    }
    ///Profitability Function
    void Profitability()
    {
        short num;
HERE:
        cout<<"Please Enter : \n(1) Gross Profit Margin\n(2) Operating Profit Margin\n(3) Net Profit Margin\n(4) Return On Assets (ROA/ROI) \n(5) Return On Equity (ROE)\n";
        cin>>num;
        ld InventoryTurnover;
        if(num == 1)
        {
            ld GrossProfit, Sales, GrossProfitMargin;
            cout<<"Please Enter Gross Profit\n";
            cin>>GrossProfit;
            cout<<"Please Enter Sales\n";
            cin>>Sales;
            GrossProfitMargin = GrossProfit/Sales;
            cout<<"Gross Profit Margin is : "<<GrossProfitMargin<<"\n";
        }
        else if(num == 2)
        {
            ld OperatingProfit, Sales, OperatingProfitMargin;
            cout<<"Please Enter Operating Profit\n";
            cin>>OperatingProfit;
            cout<<"Please Enter Sales\n";
            cin>>Sales;
            OperatingProfitMargin = OperatingProfit/Sales;
            cout<<"Operating Profit Margin is : "<<OperatingProfitMargin<<"\n";
        }
        else if(num == 3)
        {
            ld EarningsAvailableForCSHolders, Sales, NetProfitMargin;
            cout<<"Please Enter Earnings Available For Common StockHolders\n";
            cin>>EarningsAvailableForCSHolders;
            cout<<"Please Enter Sales\n";
            cin>>Sales;
            NetProfitMargin = EarningsAvailableForCSHolders/Sales;
            cout<<"Net Profit Margin is : "<<NetProfitMargin<<"\n";
        }
        else if(num == 4)
        {
            ld EarningsAvailableForCSHolders, TotalAssets, ReturnOnAssets;
            cout<<"Please Enter Earnings Available For Common StockHolders\n";
            cin>>EarningsAvailableForCSHolders;
            cout<<"Please Enter Total Assets\n";
            cin>>TotalAssets;
            ReturnOnAssets = EarningsAvailableForCSHolders/TotalAssets;
            cout<<"Return On Assets is : "<<ReturnOnAssets<<"\n";
        }
        else if(num == 5)
        {
            ld EarningsAvailableForCSHolders, TotalEquity, ReturnOnEquity;
            cout<<"Please Enter Earnings Available For Common StockHolders\n";
            cin>>EarningsAvailableForCSHolders;
            cout<<"Please Enter ShareHolder's Equity\n";
            cin>>TotalEquity;
            ReturnOnEquity = EarningsAvailableForCSHolders/TotalEquity;
            cout<<"Return On Equity is : "<<ReturnOnEquity<<"\n";
        }
        else
        {
            cout<<"Please Make Sure That You Have Entered (1) OR (2) OR (3) OR (4) OR (5)\n";
            goto HERE;
        }
    }
    ///Market Function
    void Market()
    {
        short num;
HERE:
        cout<<"Please Enter : \n(1) Price/Earnings Ratio (P/E)\n(2) Earnings Per Share (EPS)\n(3) Price/Book Value Ratio (P/BV) \n(4) Book Value Per Share (BV)\n(5) Dividends Yield Ratio\n(6) Dividends Per Share (DPS)\n";
        cin>>num;
        ld InventoryTurnover;
        if(num == 1 || num == 2)
        {
            ld EarningsAvailableForCSHolders, NoOfOutstandingCS,MarketPricePerShare, PriceEarnings, EPS;
            if(num == 1) cout<<"We Have To Calculate Earnings Per Share (EPS) First\n";
            cout<<"Please Enter  Earnings Available For Common StockHolders\n";
            cin>>EarningsAvailableForCSHolders;
            cout<<"Please Enter Number Of Outstanding Common Stock\n";
            cin>>NoOfOutstandingCS;
            EPS = EarningsAvailableForCSHolders/NoOfOutstandingCS;
            if(num == 1)
            {
                cout<<"Please Enter Market Price Per Share\n";
                cin>>MarketPricePerShare;
                PriceEarnings = MarketPricePerShare/EPS;
                cout<<"Price/Earnings Ratio Is : "<<PriceEarnings<<"\n";
            }
            else cout<<"Earnings Per Share (EPS) Is : "<<EPS<<"/Share\n";
        }
        else if(num == 3 || num == 4)
        {
            ld CSEquity, NoOfOutstandingCS,MarketPricePerShare, PricePerBookValue, BookValue;
            if(num == 3) cout<<"We Have To Calculate Book Value Per Share (BV) First\n";
            cout<<"Please Enter  Common Stock Equity\n";
            cin>>CSEquity;
            cout<<"Please Enter Number Of Outstanding Common Stock\n";
            cin>>NoOfOutstandingCS;
            BookValue = CSEquity/NoOfOutstandingCS;
            if(num == 3)
            {
                cout<<"Please Enter Market Price Per Share\n";
                cin>>MarketPricePerShare;
                PricePerBookValue = MarketPricePerShare/BookValue;
                cout<<"Price/Book Value Ratio (P/BV) Is : "<<PricePerBookValue<<"\n";
            }
            else cout<<"Book Value Per Share (BV) Is : "<<BookValue<<"/Share\n";
        }
        else if(num == 5 || num == 6)
        {
            ld DividendsPaid, NoOfOutstandingCS,MarketPricePerShare, DividendsYield, DPS;
            if(num == 5) cout<<"We Have To Calculate Dividends Per Share (DPS) First\n";
            cout<<"Please Enter  Dividends Paid During The Period\n";
            cin>>DividendsPaid;
            cout<<"Please Enter Number Of Outstanding Common Stock\n";
            cin>>NoOfOutstandingCS;
            DPS = DividendsPaid/NoOfOutstandingCS;
            if(num == 5)
            {
                cout<<"Please Enter Market Price Per Share\n";
                cin>>MarketPricePerShare;
                DividendsYield = DPS/MarketPricePerShare;
                cout<<"Dividends Yield Ratio Is : "<<DividendsYield<<"\n";
            }
            else cout<<"Dividends Per Share (DPS) Is : "<<DPS<<"/Share\n";
        }
        else
        {
            cout<<"Please Make Sure That You Have Entered (1) OR (2) OR (3) OR (4) OR (5)\n";
            goto HERE;
        }
    }
    ///DuPont Function
    void DuPont()
    {
        short num;
HERE:
        cout<<"Please Enter : \n(1) Return On Assets (ROA)\n(2) Return On Equity (ROE) {ROA Is Known}\n(3)  Return On Equity (ROE) {ROA Is Unknown} \n";
        cin>>num;
        if(num == 1)
        {
            ld NetProfitMargin, TotalAssetTurnover,ROA;
            cout<<"Please Enter Net Profit Margin\n";
            cin>>NetProfitMargin;
            cout<<"Please Enter Total Asset Turnover\n";
            cin>>TotalAssetTurnover;
            ROA = NetProfitMargin * TotalAssetTurnover;
            cout<<"Return On Assets (ROA) Is : "<<ROA<<"\n";
        }
        else if(num == 2)
        {
            ld  ROA, EM, ROE;
            cout<<"Please Enter Return On Assets (ROA)\n";
            cin>>ROA;
            cout<<"Please Enter Equity Multiplier (Financial Leverage Multiplier)\n";
            cin>>EM;
            ROE = ROA * EM;
            cout<<"Return On Equity (ROE) Is : "<<ROE<<"\n";
        }
        else if(num == 3)
        {
            ld NetProfitMargin, TotalAssetTurnover, EM, ROE;
            cout<<"Please Enter Net Profit Margin\n";
            cin>>NetProfitMargin;
            cout<<"Please Enter Total Asset Turnover\n";
            cin>>TotalAssetTurnover;
            cout<<"Please Enter Equity Multiplier (Financial Leverage Multiplier)\n";
            cin>>EM;
            ROE = NetProfitMargin * TotalAssetTurnover * EM;
            cout<<"Return On Equity (ROE) Is : "<<ROE<<"\n";
        }
        else
        {
            cout<<"Please Make Sure That You Have Entered (1) OR (2) OR (3) OR (4) OR (5)\n";
            goto HERE;
        }
    }
    ///FreeCashFlow Function
    void FreeCashFlow()
    {
        ld OCF = 0, NFAI, DeltaNFA, NCAI, DeltaCA,DeltaAP, FCF, Deprecation, CHOICE;
HERE:
        cout<<"Please Enter :\n(1) If Net Operating Profits After Tax (NOPAT) Is Known\n(2) If Earnings Before Interest And Taxes (EBIT) Is Known\n";
        cin>>CHOICE;
        if(CHOICE == 1)
        {
            ld NOPAT;
            cout<<"Please Enter Net Operating Profits After Tax (NOPAT)\n";
            cin>>NOPAT;
            OCF += NOPAT;
        }
        if(CHOICE == 2)
        {
            ld EBIT;
            cout<<"Please Enter Earnings Before Interest And Taxes (EBIT)\n";
            cin>>EBIT;
            OCF += EBIT;
        }
        else
        {
            cout<<"Please Make Sure That You Have Entered (1) OR (2)\n";
            goto HERE;
        }
        cout<<"Please Enter Deprecation\n";
        cin>>Deprecation;
        OCF += Deprecation;
        cout<<"Please Enter Change In Fixed Assets\n";
        cin>>DeltaNFA;
        NFAI = DeltaNFA + Deprecation;
        cout<<"Please Enter Change In Current Assets (CA)\n";
        cin>>DeltaCA;
        cout<<"Please Enter Change In Current Accounts Payable (A/P) & Accruals \n";
        cin>>DeltaAP;
        NCAI = DeltaCA - DeltaAP ;
        FCF = OCF-NFAI-NCAI;
        cout<<"Free Cash Flow (FCF) Is :"<<FCF<<"$\n";
    }
};
///CHAPTER 4
class Chapter4
{

public :
    ///RateOfReturn Function
    void RateOfReturn()
    {
        ld r, Ct, Pt, Pt1;
        cout<<"Please Enter Value At Ending\n";
        cin>>Pt;
        cout<<"Please Enter Value At Beginning\n";
        cin>>Pt1;
        cout<<"Please Enter Cash Flow Received\n";
        cin>>Ct;
        r = ( (Ct+(Pt - Pt1))/Pt1 ) * 100;
        cout<<"Rate Of Return Is "<<r<<"%\n";
    }
    ///Range Function
    void Range()
    {
        ll NoOfProjects;
        cout<<"Please Enter Number Of Projects You Want To Compare\n";
        cin>>NoOfProjects;
        ld Range[ NoOfProjects ];
        map<ld,ll> ProjectNumber;
        for(short i = 1; i<= NoOfProjects; i++)
        {
            ld mx, mn;
            cout<<"Please Enter Highest Rate Of Return Of Project No. "<<i<<"\n";
            cin>>mx;
            cout<<"Please Enter Lowest Rate Of Return Of Project No. "<<i<<"\n";
            cin>>mn;
            Range[i-1] = mx - mn;
            ProjectNumber[ Range[i-1] ] = i;
        }
        sort(Range,Range + NoOfProjects);
        cout<<"Ranking Of Projects Is:\n";
        for(short i = 1; i <= NoOfProjects; i++)
        {
            cout<<i<<")"<<"Project No. "<< ProjectNumber[ Range[i-1] ]<<" Which Have Range Equal "<<Range[i-1]<<"%\n";
        }
    }
    ///ProjectRiskReturn Function
    void ProjectRiskReturn()
    {
        short num;
HERE:
        cout<<"Please Enter : \n(1) Standard Deviation (Total Risk)\n(2) Expected Return\n";
        cin>>num;
        if(num == 1)
        {
HERE1:
            cout<<"Please Enter (1) If It's Based On Expected Future Cash Flow AND Probability Of Happening At Each Case OR (2) If It's Based On Historical Data\n";
            short choice;
            cin>>choice;
            if(choice == 1)
            {
                cout<<fixed<<setprecision(5);
                ld Probability,AverageReturn, Return, StandardDeviation, NoOfYears, Sigma = 0;
                cout<<"Please Enter Number Of Years\n";
                cin>>NoOfYears;
                cout<<"Please Enter Average Rate Of Return Of Years\n";
                cin>>AverageReturn;
                AverageReturn = AverageReturn/100;
                for(short i = 1; i <= NoOfYears; i++)
                {
                    cout<<"Please Enter Expected Return At Year "<<i<<"\n";
                    cin>>Return;
                    Return = Return/100;
                    cout<<"Please Enter Probability Of happening At Year "<<i<<"\n";
                    cin>>Probability;
                    Sigma += ( pow((Return - AverageReturn),2) * Probability );
                    //cout<<"THIS IS SIGMA BITCH "<<Sigma<<"\n";
                    //cout<<"THIS IS POW BITCH "<<pow(Return - AverageReturn,2)<<"\n";
                }
                //cout<<"THIS IS SIGMA BITCH "<<Sigma<<"\n";
                StandardDeviation = (sqrt(Sigma)) * 100;
                cout<<"Standard Deviation (Total Risk) For Project Is : "<<StandardDeviation<<"%\n";
            }
            else if(choice == 2)
            {
                ld Return,AverageReturn, StandardDeviation, Sigma = 0, NoOfYears;
                cout<<"Please Enter Number Of Years\n";
                cin>>NoOfYears;
                cout<<"Please Enter Average Rate Of Return Of Years\n";
                cin>>AverageReturn;
                AverageReturn = AverageReturn/100;
                for(short i = 1; i <= NoOfYears; i++)
                {
                    cout<<"Please Enter Expected Return At Year "<<i<<"\n";
                    cin>>Return;
                    Sigma += ( pow((Return - AverageReturn),2) );
                }
                StandardDeviation = sqrt( (Sigma/(NoOfYears-1)) );
                cout<<"Standard Deviation (Total Risk) For Project Is : "<<StandardDeviation<<"%\n";
            }
            else
            {
                cout<<"Please Make Sure That You Have Entered (1) OR (2)\n";
                goto HERE1;
            }
        }
        else if(num == 2)
        {
HERE2:
            cout<<"Please Enter (1) If It's Based On Expected Future Cash Flow AND Probability Of Happening At Each Case OR (2) If It's Based On Historical Data\n";
            short choice;
            cin>>choice;
            if(choice == 1)
            {
                ld Probability, Return, ExpectedRateOfReturn = 0, NoOfYears;
                cout<<"Please Enter Number Of Years\n";
                cin>>NoOfYears;
                for(short i = 1; i<=NoOfYears; i++)
                {
                    cout<<"Please Enter Expected Return At Year "<<i<<"\n";
                    cin>>Return;
                    cout<<"Please Enter Probability Of happening At Year "<<i<<"\n";
                    cin>>Probability;
                    ExpectedRateOfReturn += (Return * Probability);
                }
                cout<<"Expected Rate Of Return For Project Is : "<<ExpectedRateOfReturn<<"%\n";
            }
            else if(choice == 2)
            {
                ld Return, ExpectedRateOfReturn,  Sigma = 0, NoOfYears;
                cout<<"Please Enter Number Of Years\n";
                cin>>NoOfYears;
                for(short i = 1; i <= NoOfYears; i++)
                {
                    cout<<"Please Enter Expected Return At Year "<<i<<"\n";
                    cin>>Return;
                    Sigma += Return;
                }
                ExpectedRateOfReturn = Sigma/NoOfYears;
                cout<<"Expected Rate Of Return For Project Is : "<<ExpectedRateOfReturn<<"%\n";
            }
            else
            {
                cout<<"Please Make Sure That You Have Entered (1) OR (2)\n";
                goto HERE2;
            }

        }
        else
        {
            cout<<"Please Make Sure That You Have Entered (1) OR (2)\n";
            goto HERE;
        }
    }
    ///CoefficientOfVariance Function
    void CoefficientOfVariance()
    {
        ll NoOfProjects;
        cout<<"Please Enter Number Of Projects You Want To Compare\n";
        cin>>NoOfProjects;
        ld CoefficientOfVariance[ NoOfProjects ];
        map<ld,ll> ProjectNumber;
        for(short i = 1; i<=NoOfProjects; i++)
        {
            ld SD, R;
            cout<<"Please Enter Standard Deviation Of Project No. "<<i<<"\n";
            cin>>SD;
            cout<<"Please Enter Expected Return Of Project No."<<i<<"\n";
            cin>>R;
            CoefficientOfVariance[i-1] = SD/R;
            ProjectNumber[ CoefficientOfVariance[i-1] ] = i;
        }
        sort(CoefficientOfVariance,CoefficientOfVariance + NoOfProjects);
        cout<<"Ranking Of Projects Is:\n";
        for(short i = 1; i<=NoOfProjects; i++)
        {
            cout<<i<<")"<<"Project No. "<< ProjectNumber[ CoefficientOfVariance[i-1] ]<<" Which Have Coefficient Of Variance Equal "<<CoefficientOfVariance[i-1]<<"\n";
        }
    }
    /// Portfolio Return Function
    void PortfolioReturn()
    {
        short NoOfAssets;
        ld PortofolioReturn = 0;
        cout<<"Please Enter Number Of Assets In Portfolio\n";
        cin>>NoOfAssets;
        for(short i =1; i <= NoOfAssets; i++)
        {
            ld Return, Weight ;
            cout<<"Please Enter Return Of Asset No. "<<i<<" In (%)\n";
            cin>>Return;
            cout<<"Please Enter Weight Of Asset No. "<<i<<" From Overall Portfolio\n";
            cin>>Weight;
            PortofolioReturn += (Return * Weight);
        }
        cout<<"Expected Return Of Portfolio Is "<<PortofolioReturn<<"%\n";
    }


    ///Portfolio Risk Function
    void PortfolioRisk()
    {
        cout<<fixed<<setprecision(5);
        short NoOfAssets;
        ld PortofolioRisk = 0, Sigma = 0,WMulti = 1, SDMulti = 1;
        cout<<"Please Enter Number Of Assets In Portfolio\n";
        cin>>NoOfAssets;
        for(short i =1; i <= NoOfAssets; i++)
        {
            ld SD, W ;
            cout<<"Please Enter Weight Of Asset No. "<<i<<" In (Decimal Range From 0 To 1)\n";
            cin>>W;
            WMulti *= W;
            cout<<"Please Enter Standard Deviation (Total Risk) Of Asset No. "<<i<<" From Overall Portfolio\n";
            cin>>SD;
            SD /= 100;
            SDMulti *= SD;
            Sigma += ( pow(W,2) * pow(SD,2) );
        }
        short Choice;
HERE1:
        cout<<"Please Enter 1) If Covariance (COV) Is Known\n2)If Covariance Is Unknown\n";
        cin>>Choice;
        if(Choice == 1)
        {
            ld Covariance ;
            cout<<"Please Enter Covariance (COV) \n";
            cin>>Covariance;
            Sigma += ( 2 * WMulti * Covariance);
            PortofolioRisk = sqrt(Sigma);
            PortofolioRisk *= 100;
            cout<<"Risk Of Portfolio Is "<<PortofolioRisk<<"%\n";
        }
        else if(Choice == 2)
        {
            short Choice1;
HERE2:
            cout<<"Please Enter 1) If Correlation Coefficient Is Known \n2)If Correlation Coefficient Is UnKnown\n";
            cin>>Choice1;
            if(Choice1 == 1)
            {
                ld Correlation ;
                cout<<"Please Enter Correlation Coefficient\n";
                cin>>Correlation;
                Sigma += ( 2 * WMulti * (Correlation * SDMulti));
                PortofolioRisk = sqrt(Sigma);
                PortofolioRisk *= 100;
                cout<<"Risk Of Portfolio Is "<<PortofolioRisk<<"%\n";
            }
            else if(Choice1 == 2)
            {
                short ChoiceCOV;
HERE3:
                cout<<"Please Enter 1) If Data Is Historical 2) If Data Depends On Future Prediction\n";
                cin>>ChoiceCOV;
                short NoOfYears;
                cout<<"Please Enter Number Years\n";
                cin>>NoOfYears;
                ld AssetsAverageReturn[ NoOfAssets ]; // NoOfAssets Is Given In First Line Of Function
                if(ChoiceCOV == 1)
                {
                    for(short i = 1 ; i<= NoOfAssets ; i++)
                    {
                        cout<<"Please Enter Average Return Of Asset No. "<<i<<"\n";
                        cin>>AssetsAverageReturn[i];
                        AssetsAverageReturn[i] /= 100;
                    }
                    ld SigmaOfCOV = 0;
                    for(short i = 1 ; i <= NoOfYears ; i++)
                    {
                        ld Multi = 1;
                        for(short j = 1 ; j <= NoOfAssets ; j++)
                        {
                            ld Return;
                            cout<<"Please Enter Return Of Asset No. "<<j<<" In Year "<<i<<"\n";
                            cin>>Return;
                            Return /= 100;
                            Multi *= ( Return - AssetsAverageReturn[j] );
                        }
                        SigmaOfCOV += Multi;
                    }
                    ld Covariance = SigmaOfCOV/(NoOfYears - 1);
                    Sigma += ( 2 * WMulti * Covariance);
                    PortofolioRisk = sqrt(Sigma);
                    PortofolioRisk *= 100;
                    cout<<"Risk Of Portfolio Is "<<PortofolioRisk<<"%\n";
                }
                else if(ChoiceCOV == 2)
                {
                    for(short i = 1 ; i <= NoOfAssets ; i++)
                    {
                        cout<<"Please Enter Average Return Of Asset No. "<<i<<"\n";
                        cin>>AssetsAverageReturn[i];
                        AssetsAverageReturn[i] /= 100;
                    }
                    ld Covariance = 0;
                    for(short i = 1 ; i <= NoOfYears ; i++)
                    {
                        ld Multi =1;
                        for(short j = 1 ; j <= NoOfAssets ; j++)
                        {
                            ld Return;
                            cout<<"Please Enter Return Of Asset No. "<<j<<" In Year "<<i<<"\n";
                            cin>>Return;
                            Return /= 100;
                            Multi *= (Return - AssetsAverageReturn[j] );
                        }
                        ld Probability;
                        cout<<"Please Enter Probability Of Happening\n";
                        cin>>Probability;
                        Covariance += (Multi * Probability);
                    }
                    //cout<<"THIS COVERANCE BITCHHHH "<<Covariance<<"\n";
                    Sigma += ( 2 * WMulti * Covariance);
                    PortofolioRisk = sqrt(Sigma);
                    PortofolioRisk *= 100;
                    cout<<"Risk Of Portfolio Is "<<PortofolioRisk<<"%\n";
                }
                else
                {
                    cout<<"Please Make Sure That You Have Entered (1) OR (2)\n";
                    goto HERE3;
                }
            }
            else
            {
                cout<<"Please Make Sure That You Have Entered (1) OR (2)\n";
                goto HERE2;
            }

        }
        else
        {
            cout<<"Please Make Sure That You Have Entered (1) OR (2)\n";
            goto HERE1;
        }
    }

    /// Beta Of Portfolio Function
    void PortfolioBeta()
    {
        short NoOfAssets;
        ld PortfolioBeta = 0 ;
        cout<<"Please Enter Number Of Assets In Portfolio\n";
        cin>>NoOfAssets;
        for(short i =1; i <= NoOfAssets; i++)
        {
            ld B, W ;
            cout<<"Please Enter Weight Of Asset No. "<<i<<" In (Decimal Range From 0 To 1)\n";
            cin>>W;
            cout<<"Please Enter Beta (Non-Diversifiable Risk) Of Asset No. "<<i<<"\n";
            cin>>B;
            PortfolioBeta += ( W * B );
        }
        cout<<"Beta Of The Portfolio Is "<<PortfolioBeta<<"\n";

        if(PortfolioBeta == 1) cout<<"This Portfolio Have Same Beta Of Market Which Is 1 \n";
        else if(PortfolioBeta == 0) cout<<"This Portfolio Is Unaffected By Market Movement As Beta Is ZERO \n";
        else if(PortfolioBeta > 1) cout<<"This Portfolio Moves In The Same Direction As The Market As Beta Is Higher Than 1 \n";
        else cout<<"This Portfolio Moves In The Opposite Direction As The Market As Beta Is Lower Than 1 \n";

    }

    /// Capital Asset Pricing Model (CAPM) Function
    void CapitalAssetPricingModelCAPM()
    {
        cout<<fixed<<setprecision(1);
        ld Rj, Rf, B, Rm ;
        cout<<"Please Enter Risk-Free Rate Of Return\n";
        cin>>Rf;
        cout<<"Please Enter Beta Of Asset\n";
        cin>>B;
        cout<<"Please Enter Market Rate Of Return\n";
        cin>>Rm;
        cout<<"Market Risk Premium Is "<<(Rm - Rf)<<"%\n";
        cout<<"Asset Risk Premium  Is "<<(B * (Rm - Rf))<<"%\n";
        Rj = Rf + (B * (Rm - Rf));
        cout<<"Required Rate Of Return For This Asset Is "<<Rj<<"%\n";
    }

};

///CHAPTER 5
class Chapter5
{
public:
    ///Present Value Interest Factor For Annuity (PVIFA) Function
    ld PVIFA(ld Rj, ll n)
    {
        return (1-(1/pow((1+Rj),n)))/Rj;
    }
    ///Present Value Interest Factor (PVIF) Function
    ld PVIF(ld Rj, ll n)
    {
        return 1/(pow((1+Rj),n));
    }
    ///Bond's Value Using Present Value Of Expected Cash Flow + Par Value Of Bond At Maturity Discounted At Required Rate Of Return
    void BondValue()
    {
        short BondType;
HERE:
        cout<<"Please Enter 1) For Perpetual Bond 2)For Maturity Bond\n";
        cin>>BondType;
        if(BondType == 1)
        {
            ld CouponRate, ParValue,InterestPaid, RequiredRateOfReturn, DiffRates;
            cout<<"Please Enter Par Value Of Bond\n";
            cin>>ParValue;
            cout<<"Please Enter Coupon Rate Of Bond\n";
            cin>>CouponRate;
            InterestPaid = (CouponRate/100) * ParValue ;
            cout<<"Please Enter Number Of Return(s) Used To Calculate Bond Value \n";
            cin>>DiffRates;
            for(short i = 1; i <= DiffRates; i++)
            {
                cout<<"Please Enter Required Rate Of Return for Bond\n";
                cin>>RequiredRateOfReturn;
                cout<<"Value Of Perpetual Bond Is "<<InterestPaid/(RequiredRateOfReturn/100)<<"EGP\n";
            }

        }
        else if(BondType == 2)
        {
            ld CouponRate, ParValue,InterestPaid, RequiredRateOfReturn, DiffRates, NoOfYears, Annually;
            cout<<"Please Enter Par Value Of Bond\n";
            cin>>ParValue;
            cout<<"Please Enter Coupon Rate Of Bond\n";
            cin>>CouponRate;
            cout<<"Please Enter Number Of Years Until Maturity Of Bond\n";
            cin>>NoOfYears;
            InterestPaid = (CouponRate/100) * ParValue ;
            cout<<"Please Enter Number Of Return(s) Used To Calculate Bond Value \n";
            cin>>DiffRates;
HERE2:
            cout<<"Please Enter 1)If Interest Is Paid Annually\n2)If Interest Is Paid Semi-Annually\n3)If Interest Is Paid Quarter-Annually\n";
            cin>>Annually;
            if(Annually == 2)
            {
                InterestPaid /= 2;
                NoOfYears *= 2;
            }
            else if(Annually == 3)
            {
                InterestPaid /= 4;
                NoOfYears *= 4;
            }
            else if(Annually != 1)
            {
                cout<<"Please Make Sure That You Have Entered (1) OR (2) OR (3)\n";
                goto HERE2;
            }
            for(short i =1; i<=DiffRates; i++)
            {
                cout<<"Please Enter Required Rate Of Return for Bond\n";
                cin>>RequiredRateOfReturn;
                if(Annually == 2) RequiredRateOfReturn /= 2;
                else if(Annually == 3) RequiredRateOfReturn /= 4;
                ld BondValue = InterestPaid * PVIFA(RequiredRateOfReturn/100,NoOfYears) + ParValue * PVIF(RequiredRateOfReturn/100,NoOfYears);
                //cout<<"PVIFA"<<PVIFA(RequiredRateOfReturn/100 ,NoOfYears)<<"\n";
                //cout<<"PVIF"<<PVIF(RequiredRateOfReturn/100 ,NoOfYears)<<"\n";
                cout<<"Value Of Bond Is "<<BondValue<<"EGP";
                if(BondValue == ParValue)
                {
                    cout<<"\t Selling At Par/Face Value\n";
                }
                else if(BondValue > ParValue)
                {
                    cout<<"\t Selling At Premium\n";
                }
                else cout<<"\t Selling At Discount\n";
            }
        }
        else
        {
            cout<<"Please Make Sure That You Have Entered (1) OR (2)\n";
            goto HERE;
        }

    }

    ///Current Yield (CY) Function
    void CurrentYield()
    {
        ld AnnualInterest, MarketPrice, CY;
        cout<<"Please Enter Annual Interest\n";
        cin>>AnnualInterest;
        cout<<"Please Enter Market Price Of Bond\n";
        cin>>MarketPrice;
        CY = AnnualInterest/MarketPrice;
        cout<<"Current Yield (CY) Is "<<CY * 100<<"%\n";
    }
    ///Yield To Maturity (YTM) Function
    void YieldToMaturity()
    {
        ld Interest, MarketPrice,NoOfYears, YTM;
        cout<<"Please Enter Annual Interest\n";
        cin>>Interest;
        cout<<"Please Enter Market Price Of Bond\n";
        cin>>MarketPrice;
        cout<<"Please Enter Number Of Years Until Maturity Of Bond\n";
        cin>>NoOfYears;
        YTM = (Interest + (1000 - MarketPrice/NoOfYears))/((1000 + MarketPrice)/2);
        cout<<"Yield To Maturity (YTM) Is "<<YTM * 100<<"%\n";
    }
};

///CHAPTER 6
class Chapter6
{
public:
    ///Zero Growth Model Function
    void ZeroGrowthModel()
    {
        ld D1, Rs,P0;
        cout<<"Please Enter Dividend Value (D1)\n";
        cin>>D1;
        cout<<"Please Enter Required Rate Of Return\n";
        cin>>Rs;
        P0 = D1/Rs;
        cout<<"Value Of Share Is "<<P0 * 100<<" EGP/Share\n";
    }
    ///Constant Growth Model (Gordon Model) Function
    void GordonModel()
    {
        ld D1, D0, Rs,P0, g,Choice;
HERE:
        cout<<"Please Enter (1) If Growth Rate Is Known\n(2) If Growth Rate Is Unkown\n";
        cin>>Choice;
        if(Choice == 1)
        {
            cout<<"Please Enter Growth Rate\n";
            cin>>g;
            g /= 100;
            cout<<"Please Enter Most Recent Dividend (D0)\n";
            cin>>D0;
            D1 = D0 * (1 + g);
            cout<<"Please Enter Required Rate Of Return\n";
            cin>>Rs;
            Rs /= 100 ;
            P0 = D1/(Rs - g);
            cout<<"Value Of Share Is "<<P0<<" EGP/Share\n";
        }
        else if(Choice == 2)
        {
            cout<<fixed<<setprecision(5);
            short NoOfYears;
            ld DFirst, DLast;
            cout<<"Please Enter Number Of Years\n";
            cin>>NoOfYears;
            NoOfYears--;
            cout<<"Please Enter Most Recent Dividend\n";
            cin>>DFirst;
            cout<<"Please Enter Oldest Dividend Paid\n";
            cin>>DLast;
            g = pow(DFirst/DLast, (1.0/NoOfYears) ) - 1;
            g = ( round(g * 100) ) / 100;
            D1 = DFirst * (1 + g);
            cout<<"Please Enter Required Rate Of Return\n";
            cin>>Rs;
            Rs /= 100 ;
            P0 = D1/(Rs - g);
            cout<<"Value Of Share Is "<<P0<<" EGP/Share\n";
        }
        else
        {
            cout<<"Please Make Sure That You Have Entered (1) OR (2)\n";
            goto HERE;
        }

    }
    ///Present Value Interest Factor (PVIF) Function
    ld PVIF(ld Rj, ll n)
    {
        return 1/(pow((1+Rj),n));
    }
    ///Variable Growth Model Function
    void VariableGrowthModel()
    {
        ld D0, Rs, ShareValue = 0;
        cout<<"Please Enter Most Recent Dividend\n";
        cin>>D0;
        cout<<"Please Enter Required Rate Of Return\n";
        cin>>Rs;
        Rs /= 100;
        ll i = 1;
        vector<ld>Dividends;
        Dividends.emplace_back(D0);
        while(true)
        {
            string str;
HERE:
            cout<<"Please Type (div) for Entering Dividend Of Year "<<i<<" (D"<<i<<")  OR (growth) To Specifiy Growth Rate And Number Of Years OR (inf) To Specifiy Infinite Growth Rate OR (done) To Start Calculating Share's Price \n";
            cin>>str;
            if(str == "div")
            {
                ld Dx;
                cout<<"Please Enter Dividend Of Year"<<i<<" (D"<<i<<")\n";
                cin>>Dx;
                Dividends.emplace_back(Dx);
            }
            else if(str == "growth")
            {
                ld Gx,Years;
                cout<<"Enter Growth Rate\n";
                cin>>Gx;
                Gx /= 100;
                cout<<"Enter Number Of Years";
                cin>>Years;
                for(ll j = i; j <= Years ; j++,i++)
                {
                    ld Dx = Dividends[j-1] * (1 + Gx);
                    //cout<<"THIS IS Dx"<<Dx<<"\n";
                    Dividends.emplace_back(Dx);
                }
                continue;
            }
            else if(str == "done")
            {
                ld InfiniteGrowth;
                cout<<"Enter Infinite Growth Rate\n";
                cin>>InfiniteGrowth;
                InfiniteGrowth /= 100;
                ld D1 = Dividends.back() * (1 + InfiniteGrowth);
                //cout<<"THIS IS D111  "<<D1<<"\n";
                ld Gordon = D1/(Rs - InfiniteGrowth);
                Dividends.emplace_back(Gordon);
                //cout<<"THIS IS Gordon  "<<Gordon<<"\n";
                break;
            }
            else
            {
                cout<<"Please Make Sure That Text Is Correctly Typed\n";
                goto HERE;
            }
            i++;
        }

        for(ll i = 1; i < (ll)Dividends.size(); i++)
        {
            //cout<<"THIS IS DIV VECTOR "<<Dividends[i]<<"\n";
            if(i == (ll)(Dividends.size()-1) ) ShareValue += ( Dividends[i]*PVIF(Rs, i-1 ) );
            else ShareValue += ( Dividends[i]*PVIF(Rs, i) );
        }
        cout<<"Share Price Is"<<ShareValue<<"EGP\n";
    }
    ///Free Cash Flow Model Function
    void FreeCashFlowModel()
    {
        ld InfiniteGrowth, WACC, Vs, Vd, Vp, Vc = 0, NoOfShares, NoOfYears, ShareValue;
        cout<<"Please Enter Weighed Average Cost Of Capital (WACC)\n";
        cin>>WACC;
        WACC /= 100;
        cout<<"Please Enter Infinite Growth Rate\n";
        cin>>InfiniteGrowth;
        InfiniteGrowth /= 100;
        cout<<"Please Enter Market Value Of All Debt\n";
        cin>>Vd;
        cout<<"Please Enter Value Of Preferred Stock\n";
        cin>>Vp;
        cout<<"Please Enter Number Of Outstanding Common Share\n";
        cin>>NoOfShares;
        cout<<"Please Enter Number Of Years\n";
        cin>>NoOfYears;
        vector<ld>FCF;
        for(ll i =1; i<= NoOfYears ; i++)
        {
            ld fcf;
            cout<<"Please Enter Free Cash Flow Of Year"<<i<<" (FCF"<<i<<")\n";
            cin>>fcf;
            FCF.emplace_back(fcf);
            if(i == NoOfYears)
            {
                ld D1, Gordon;
                D1 = FCF.back() * (1 + InfiniteGrowth);
                Gordon = D1/(WACC - InfiniteGrowth);
                FCF.emplace_back(Gordon);
                break;
            }
        }
        for(ll i = 0; i<(ll)FCF.size(); i++)
        {
            //cout<<"THIS IS FCF VECTOR "<<FCF[i]<<"\n";
            if(i == (FCF.size()-1) ) Vc += ( FCF[i] * PVIF(WACC, i) );
            else Vc += ( FCF[i] * PVIF(WACC, i+1) );
        }
        cout<<"Value Of Company Is "<<Vc<<"EGP\n";
        Vs = Vc - Vd - Vp;
        ShareValue = Vs/NoOfShares;
        cout<<"Value Of Common Stock Share Is "<<ShareValue<<"EGP/Share\n";
    }
    ///Book Value Per Share Function
    void BookValuePerShare()
    {
        ld TotalAssets, TotalLiab, NoOfCommonStock, BVPS ;
        cout<<"Please Enter Total Assets\n";
        cin>>TotalAssets;
        cout<<"Please Enter Total Liabilities\n";
        cin>>TotalLiab;
        cout<<"Please Enter Number Of Outstanding Common Stock Shares\n";
        cin>>NoOfCommonStock;
        BVPS = (TotalAssets - TotalLiab) / NoOfCommonStock;
        cout<<"Book Value Per Share (BVPS) Is "<<BVPS<<" EGP/Share\n";
    }
    ///Liquidation Value Per Share Function
    void LiquidationValuePerShare()
    {
        ld TotalAssets, TotalLiab, NoOfCommonStock, LVPS, Percent ;
        cout<<"Please Enter Total Assets\n";
        cin>>TotalAssets;
        cout<<"Please Enter Market Value Percentage Of Total Assets\n";
        cin>>Percent;
        Percent /= 100;
        cout<<"Please Enter Total Liabilities\n";
        cin>>TotalLiab;
        cout<<"Please Enter Number Of Outstanding Common Stock Shares\n";
        cin>>NoOfCommonStock;
        LVPS = ( (TotalAssets * Percent) - TotalLiab) / NoOfCommonStock;
        cout<<"Liquidation Value Per Share (LVPS) Is "<<LVPS<<" EGP/Share\n";
    }
    ///Price/Earnings Ratio (EPS Multiplayer) Valuation Function
    void PriceEarningsRatioValuation()
    {
        ld PE, EPS, ShareValue;
        cout<<"Please Price/Earnings Ratio\n";
        cin>>PE;
        cout<<"Please Enter Earnings Per Share\n";
        cin>>EPS;
        ShareValue = PE * EPS;
        cout<<"Firm's Share Value Is "<<ShareValue<<" EGP/Share\n";
    }
};
class Chapter7
{
public:
    ///Cost Of Long-Term Debt Using Current Yield (CY) Function
    void CostOfLongTermDebtCurrentYield()
    {
        ld BondValue, ParValue, CouponRate, I, Rd, Ri, Tax;
        cout<<"Please Enter Par Value Of Bond\n";
        cin>>ParValue;
        cout<<"Please Enter Coupon Interest Rate Of Bond\n";
        cin>>CouponRate;
        I =  (CouponRate/100) * ParValue;
        cout<<"Please Enter Market Value Of Bond\n";
        cin>>BondValue;
        Rd = I/BondValue;
        cout<<"Please Enter Tax Rate\n";
        cin>>Tax;
        Tax /= 100;
        Ri = Rd * (1-Tax);
        cout<<"Cost Of Long-Term Debt Before Tax Is "<<Rd * 100<<"%\n";
        cout<<"Cost Of Long-Term Debt After Tax Is "<<Ri * 100<<"%\n";
    }
    ///Cost Of Long-Term Debt Function
    void CostOfLongTermDebt()
    {
        ld ParValue, CouponRate, I, Nd, FlotationCost, UnderPricingCost, NoOfYears, Rd, Ri, Tax;
        cout<<"Please Enter Par Value Of Bond\n";
        cin>>ParValue;
        cout<<"Please Enter Coupon Interest Rate Of Bond\n";
        cin>>CouponRate;
        I =  (CouponRate/100) * ParValue;
        cout<<"Please Enter Number Of Years Until Maturity Of Bond\n";
        cin>>NoOfYears;
        cout<<"Please Enter Flotation Cost (If Exist)\n";
        cin>>FlotationCost;
        cout<<"Please Enter UnderPricing Cost (If Exist)\n";
        cin>>UnderPricingCost;
        Nd = ParValue - FlotationCost - UnderPricingCost ;
        cout<<"THIS IS Nd"<<Nd<<"\n";
        Rd = (I+((ParValue-Nd)/NoOfYears)) /((ParValue + Nd)/2);
        cout<<"Please Enter Tax Rate\n";
        cin>>Tax;
        Tax /= 100;
        Ri = Rd * (1-Tax);
        cout<<"Cost Of Long-Term Debt Before Tax Is "<<Rd * 100<<"%\n";
        cout<<"Cost Of Long-Term Debt After Tax Is "<<Ri * 100<<"%\n";
    }
    ///Cost Of Common Stock Equity Function
    void CostOfCommonStockEquity()
    {
        short Method;
HERE:
        cout<<"Please Enter (1) To Use Constant Growth Valuation (Gordon) Model\n(2) To Use Capital Asset Price Modeling (CAPM)\n";
        cin>>Method;
        if(Method == 1)
        {
            ld Rs, D1, D0, g, P0 ;
            cout<<"Please Enter Most Recent Dividend\n";
            cin>>D0;
            cout<<"Please Value Of Common Stock\n";
            cin>>P0;
            cout<<"Please Value Growth Rate\n";
            cin>>g;
            D1 = D0 * (1 + (g/100));
            Rs = (D1/P0) + (g/100);
            cout<<"Cost Of Common Stock Equity Is "<<Rs * 100<<"%\n";
            cout<<"Since Cost Of Retained Earnings Is Equal To Cost Of Common Stock Equity So, Rr = Rs = "<<Rs * 100<<"%\n";
        }
        else if(Method == 2)
        {
            cout<<fixed<<setprecision(1);
            ld Rs, Rf, B, Rm ;
            cout<<"Please Enter Risk-Free Rate Of Return\n";
            cin>>Rf;
            cout<<"Please Enter Beta Of Asset\n";
            cin>>B;
            cout<<"Please Enter Market Rate Of Return\n";
            cin>>Rm;
            Rs = Rf + (B * (Rm - Rf));
            cout<<"Cost Of Common Stock Equity Is "<<Rs<<"%\n";
            cout<<"Since Cost Of Retained Earnings Is Equal To Cost Of Common Stock Equity So, Rr = Rs = "<<Rs<<"%\n";
        }
        else
        {
            cout<<"Please Make Sure That You Have Entered (1) OR (2)\n";
            goto HERE;
        }
    }
    ///Cost Of New Issue Of Common Stock Function
    void CostOfNewIssueOfCommonStock()
    {
        ld  Nn, D1, D0, g, P0, FlotationCost, UnderPricingCost, Rn;
        cout<<"Please Enter Most Recent Dividend\n";
        cin>>D0;
        cout<<"Please Value Of Common Stock\n";
        cin>>P0;
        cout<<"Please Value Growth Rate\n";
        cin>>g;
        cout<<"Please Enter Flotation Cost (If Exist)\n";
        cin>>FlotationCost;
        cout<<"Please Enter UnderPricing Cost (If Exist)\n";
        cin>>UnderPricingCost;
        Nn = P0 - FlotationCost - UnderPricingCost ;
        D1 = D0 * (1 + (g/100));
        Rn = (D1/Nn) + (g/100);
        //cout<<"THIS IS Nd"<<Nd<<"\n";
        cout<<"Cost Of New Issue Of Common Stock Is "<<Rn * 100<<"%\n";
    }
    ///Weighted Average Cost Of Capital (WACC) Function
    void WeightedAverageCostOfCapital()
    {
        ld  WACC, Wi, Ri, Ws, Rs;
        cout<<"Please Enter Proportion Of Long-Term Debt In Capital Structure\n";
        cin>>Wi;
        cout<<"Please Enter Cost Of Long-Term Debt\n";
        cin>>Ri;
        cout<<"Please Enter Proportion Of Common Stock Equity In Capital Structure\n";
        cin>>Ws;
        cout<<"Please Enter Cost Of Common Stock Equity OR Cost Of New Issue Of Common Stock\n";
        cin>>Rs;
        WACC = (Wi * Ri) + (Ws * Rs);
        cout<<"Weighted Average Cost Of Capital (WACC) Is "<<WACC<<"%\n";
    }
};
class Chapter8
{
public:
    ///Present Value Interest Factor For Annuity (PVIFA) Function
    ld PVIFA(ld Rj, ll n)
    {
        return (1-(1/pow((1+Rj),n)))/Rj;
    }
    ///Present Value Interest Factor (PVIF) Function
    ld PVIF(ld Rj, ll n)
    {
        return 1/(pow((1+Rj),n));
    }
    ///Future Value Interest Factor For Annuity (FVIFA) Function
    ld FVIFA(ld Rj, ll n)
    {
        return (pow((1+Rj),n)-1)/Rj;
    }
    ///Future Value Interest Factor (FVIF) Function
    ld FVIF(ld Rj, ll n)
    {
        return pow((1+Rj),n);
    }
    ///Present Value Function
    ld PresentValue(vector<ld>&CashFlow,ld &sz, ld IRR)
    {
        ld res = 0;
        for(ll i = 0; i < (ll)sz; i++) res += ( CashFlow[i] * PVIF(IRR, i+1) );
        return res;
    }
    ld FutureValue(vector<ld>&CashFlow,ld &sz, ld WACC)
    {
        ld res = 0;
        for(ll i = 0, j = (ll)sz-1 ; i<(ll)sz; i++,j--) res += ( CashFlow[i] * pow((1 + WACC), j ) );
        return res;
    }

    ///Net Present Value (NPV) Function
    void NetPresentValueNPV()
    {
        ld NPV, InitialInvestment, NoOfYears, PresentValue1, WACC;
        bool IsCashFlowFixed;
        cout<<"Please Enter Initial Investment Of Project\n";
        cin>>InitialInvestment;
        cout<<"Please Enter Number Of Years Project Is Expected To Generate Cash Flow\n";
        cin>>NoOfYears;
        cout<<"Please Enter Weighted Average Cost Of Capital (WACC) \n";
        cin>>WACC;
        cout<<"Is Cash Flow Fixed Every Year (Type 1 If Yes 0 If No)\n";
        cin>>IsCashFlowFixed;
        if(IsCashFlowFixed)
        {
            ld FixedCashFlow;
            cout<<"Please Enter Fixed Cash Flow\n";
            cin>>FixedCashFlow;
            PresentValue1 = FixedCashFlow * PVIFA(WACC/100,NoOfYears);
            NPV = PresentValue1 - InitialInvestment;
            cout<<"Net Present Value (NPV) Of Project Is "<<NPV<<"EGP\n";
            if(NPV>0)
            {
                cout<<"You Should Accept This Project As Net Present Value (NPV) Of Project Is Higher Than ZERO (Positive Value)\n";
            }
            else
            {
                cout<<"You Should Reject This Project As Net Present Value (NPV) Of Project Is Lower Than ZERO (Negative Value)\n";
            }
        }
        else
        {
            vector<ld>CashFlow;
            for(ll i = 1; i <= NoOfYears ; i++)
            {
                ld Cash;
                cout<<"Please Enter Cash Flow Of Year "<<i<<"\n";
                cin>>Cash;
                CashFlow.emplace_back(Cash);
            }
            ld PresentValue1 = PresentValue(CashFlow, NoOfYears, WACC/100);
            NPV = PresentValue1 - InitialInvestment;
            cout<<"Net Present Value (NPV) Of Project Is "<<NPV<<"EGP\n";
            if(NPV>0)
            {
                cout<<"You Should Accept This Project As Net Present Value (NPV) Of Project Is Higher Than ZERO (Positive Value)\n";
            }
            else
            {
                cout<<"You Should Reject This Project As Net Present Value (NPV) Of Project Is Lower Than ZERO (Negative Value)\n";
            }
        }

    }
    ///Profitability Index (PI) Function
    void ProfitabilityIndexPI()
    {
        ld PI, InitialInvestment, NoOfYears, PresentValue1, WACC;
        bool IsCashFlowFixed;
        cout<<"Please Enter Initial Investment Of Project\n";
        cin>>InitialInvestment;
        cout<<"Please Enter Number Of Years Project Is Expected To Generate Cash Flow\n";
        cin>>NoOfYears;
        cout<<"Please Enter Weighted Average Cost Of Capital (WACC) \n";
        cin>>WACC;
        cout<<"Is Cash Flow Fixed Every Year (Type 1 If Yes 0 If No)\n";
        cin>>IsCashFlowFixed;
        if(IsCashFlowFixed)
        {
            ld FixedCashFlow;
            cout<<"Please Enter Fixed Cash Flow\n";
            cin>>FixedCashFlow;
            PresentValue1 = FixedCashFlow * PVIFA(WACC/100,NoOfYears);
        }
        else
        {
            vector<ld>CashFlow;
            for(ll i = 1; i <= NoOfYears ; i++)
            {
                ld Cash;
                cout<<"Please Enter Cash Flow Of Year "<<i<<"\n";
                cin>>Cash;
                CashFlow.emplace_back(Cash);
            }
            PresentValue1 = PresentValue(CashFlow, NoOfYears, WACC/100);
        }
        PI = PresentValue1 / InitialInvestment;
        cout<<"Profitability Index (PI) Of Project Is "<<PI<<"EGP\n";
        if(PI>1)
        {
            cout<<"You Should Accept This Project As Profitability Index (PI) Of Project Is Higher Than 1\n";
        }
        else
        {
            cout<<"You Should Reject This Project As Profitability Index (PI) Of Project Is Lower Than 1\n";
        }
    }
    ///
    void InternalRateOfReturnIRR()
    {
        cout<<fixed<<setprecision(2);
        ld InitialInvestment, NoOfYears;
        vector<ld> CashFlow ;
        bool IsCashFlowFixed;
        cout<<"Please Enter Initial Investment Of Project\n";
        cin>>InitialInvestment;
        cout<<"Please Enter Number Of Years Project Is Expected To Generate Cash Flow\n";
        cin>>NoOfYears;
        cout<<"Is Cash Flow Fixed Every Year (Type 1 If Yes 0 If No)\n";
        cin>>IsCashFlowFixed;
        if(IsCashFlowFixed)
        {
            ld FixedCashFlow;
            cout<<"Please Enter Fixed Cash Flow\n";
            cin>>FixedCashFlow;
            CashFlow.insert(CashFlow.begin(),(ll)NoOfYears,FixedCashFlow);
        }
        else
        {
            for(ll i = 1; i <= NoOfYears ; i++)
            {
                ld Cash;
                cout<<"Please Enter Cash Flow Of Year "<<i<<"\n";
                cin>>Cash;
                CashFlow.emplace_back(Cash);
            }
        }
        ld l = 0, r = 200;
        ld IRR = ((l+r)/2); //Middle
        while(l <= r)
        {
            IRR = ((l+r)/2);
            //cout<<"MID :"<<mid<<"\n";
            ll res = PresentValue(CashFlow,NoOfYears,IRR/100);
            if(res == InitialInvestment)
            {
                cout<<"FOUND IRR = "<<IRR<<"%\n";
                system("pause");
                //return 0;
            }
            else if(res > InitialInvestment)   l = IRR; /// Increase IRR to Decrease Res
            else if(res < InitialInvestment)   r = IRR; /// Decrease IRR to Increase Res
        }
    }

    ///Modified Internal Rate Of Return (MIRR) Function
    void ModifiedInternalRateOfReturnMIRR()
    {
        cout<<fixed<<setprecision(2);
        ld InitialInvestment, NoOfYears, WACC, FutureValue1;
        vector<ld> CashFlow ;
        bool IsCashFlowFixed;
        cout<<"Please Enter Initial Investment Of Project\n";
        cin>>InitialInvestment;
        cout<<"Please Enter Number Of Years Project Is Expected To Generate Cash Flow\n";
        cin>>NoOfYears;
        cout<<"Please Enter Weighted Average Cost Of Capital (WACC) \n";
        cin>>WACC;
        cout<<"Is Cash Flow Fixed Every Year (Type 1 If Yes 0 If No)\n";
        cin>>IsCashFlowFixed;
        if(IsCashFlowFixed)
        {
            ld FixedCashFlow;
            cout<<"Please Enter Fixed Cash Flow\n";
            cin>>FixedCashFlow;
            FutureValue1 = FixedCashFlow * FVIFA(WACC/100,NoOfYears);
        }
        else
        {
            for(ll i = 1; i <= NoOfYears ; i++)
            {
                ld Cash;
                cout<<"Please Enter Cash Flow Of Year "<<i<<"\n";
                cin>>Cash;
                CashFlow.emplace_back(Cash);
            }
            FutureValue1 = FutureValue(CashFlow,NoOfYears,WACC/100);
        }
        ld l = 0, r = 200;
        ld MIRR = ((l+r)/2); //Middle
        while(l <= r)
        {
            MIRR = ((l+r)/2);
            //cout<<"MID :"<<mid<<"\n";
            ll res = FutureValue1/(pow((1+MIRR/100),NoOfYears));
            if(res == InitialInvestment)
            {
                cout<<"FOUND MIRR = "<<MIRR<<"%\n";
                system("pause");
                //return 0;
            }
            else if(res > InitialInvestment)   l = MIRR; /// Increase MIRR to Decrease Res
            else if(res < InitialInvestment)   r = MIRR; /// Decrease MIRR to Increase Res
        }
    }

    ///Payback Period (PB) Function
    void PaybackPeriodPB()
    {
        ld PB, InitialInvestment, NoOfYears, MaxYear;
        bool IsCashFlowFixed;
        cout<<"Please Enter Initial Investment Of Project\n";
        cin>>InitialInvestment;
        cout<<"Please Enter Number Of Years Project Is Expected To Generate Cash Flow\n";
        cin>>NoOfYears;
        cout<<"Please Enter Maximum Acceptable Number Of Years\n";
        cin>>MaxYear;
        cout<<"Is Cash Flow Fixed Every Year (Type 1 If Yes 0 If No)\n";
        cin>>IsCashFlowFixed;
        if(IsCashFlowFixed)
        {
            ld FixedCashFlow;
            cout<<"Please Enter Fixed Cash Flow\n";
            cin>>FixedCashFlow;
            PB = InitialInvestment / FixedCashFlow;
        }
        else
        {
            vector<ld>CashFlow;
            for(ll i = 1; i <= NoOfYears ; i++)
            {
                ld Cash;
                cout<<"Please Enter Cash Flow Of Year "<<i<<"\n";
                cin>>Cash;
                CashFlow.emplace_back(Cash);
            }
            ll i =0;
            ld Dec;
            while(InitialInvestment>0)
            {
                if(CashFlow[i] > InitialInvestment) Dec =(InitialInvestment/CashFlow[i] ) * 12;
                InitialInvestment -= CashFlow[i];
                i++;
            }
            i--;
            PB = i + (Dec/10);
        }
        cout<<"Payback Period (PB) Of Project Is "<<PB<<" Year(s)\n";
        if(PB<=MaxYear)
        {
            cout<<"You Should Accept This Project As PaybackPeriod (PB) Of Project Is Lower Than Maximum Acceptable Number Of Years\n";
        }
        else
        {
            cout<<"You Should Reject This Project As PaybackPeriod (PB) Of Project Is Higher Than Maximum Acceptable Number Of Years\n";
        }
    }

    ///Discounted Payback Period (DPB) Function
    void DiscountedPaybackPeriodDPB()
    {
        cout<<fixed<<setprecision(3);
        vector<ld>CashFlow;
        ld DPB, InitialInvestment, NoOfYears, MaxYear, WACC;
        bool IsCashFlowFixed;
        cout<<"Please Enter Initial Investment Of Project\n";
        cin>>InitialInvestment;
        cout<<"Please Enter Number Of Years Project Is Expected To Generate Cash Flow\n";
        cin>>NoOfYears;
        cout<<"Please Enter Weighted Average Cost Of Capital (WACC) \n";
        cin>>WACC;
        cout<<"Please Enter Maximum Acceptable Number Of Years\n";
        cin>>MaxYear;
        cout<<"Is Cash Flow Fixed Every Year (Type 1 If Yes 0 If No)\n";
        cin>>IsCashFlowFixed;
        if(IsCashFlowFixed)
        {
            ld FixedCashFlow;
            cout<<"Please Enter Fixed Cash Flow\n";
            cin>>FixedCashFlow;
            CashFlow.insert(CashFlow.begin(),(ll)NoOfYears,FixedCashFlow);
            //PB =  InitialInvestment / FixedCashFlow;
        }
        else
        {
            for(ll i = 1; i <= NoOfYears ; i++)
            {
                ld Cash;
                cout<<"Please Enter Cash Flow Of Year "<<i<<"\n";
                cin>>Cash;
                CashFlow.emplace_back(Cash);
            }
        }
        ll i = 0;
        ld Dec;
        while(InitialInvestment>0)
        {
            ld PresentValueOfCashFlow = (CashFlow[i] * PVIF(WACC/100,i+1)) ;
            if(CashFlow[i] > InitialInvestment) Dec = ( InitialInvestment/PresentValueOfCashFlow ) * 12;
            InitialInvestment -= (PresentValueOfCashFlow);
            //cout<<"CAHSFLOW "<<(CashFlow[i] * PVIF(WACC/100,i+1))<<"\n";
            i++;
        }
        i--;
        DPB = i + (Dec/10);
        cout<<"Discounted Payback Period (PB) Of Project Is "<<DPB<<" Year(s)\n";
        if(DPB <= MaxYear)
        {
            cout<<"You Should Accept This Project As Discounted PaybackPeriod (DPB) Of Project Is Lower Than Maximum Acceptable Number Of Years\n";
        }
        else
        {
            cout<<"You Should Reject This Project As Discounted PaybackPeriod (DPB) Of Project Is Higher Than Maximum Acceptable Number Of Years\n";
        }
    }

};


int main()
{
    short CH;
    cout<<fixed<<setprecision(3);
    cout<<"\t\t\t\t\t\t\t\t\t***********************\n";
    cout<<"\t\t\t\t\t\t\t\t\t Financial Calculator\n";
    cout<<"\t\t\t\t\t\t\t\t\t***********************\n\n\n";
__POINT:
    cout<<"Please Enter Chapter Number (3),(4),(5),(6),(7),(8)\n";
    cin>>CH;
    if(CH == 3)
    {
        short CHOICE3;
__HERE3:
        cout<<"Please Enter Option Number :\n(1)For Liquidity Ratio\n(2)For Activity Ratio\n(3)For Debt Ratio\n(4)For Profitability Ratio\n(5)For Market Ratio\n(6)For FreeCashFlow (FCF)\n";
        cin>>CHOICE3;
        ///CH3 Class & Functions
        Chapter3 CH3;
        if(CHOICE3 == 1)
        {
            CH3.Liquidity();
        }
        else if(CHOICE3 == 2)
        {
            CH3.Activity();
        }
        else if(CHOICE3 == 3)
        {
            CH3.Debt();
        }
        else if(CHOICE3 == 4)
        {
            CH3.Profitability();
        }
        else if(CHOICE3 == 5)
        {
            CH3.Market();
        }
        else if(CHOICE3 == 6)
        {
            CH3.FreeCashFlow();
        }
        else
        {
            cout<<"Please Make Sure That You Have Entered Option Number (1),(2),(3),(4),(5),(6)n";
            goto __HERE3;
        }

    }
    else if(CH == 4)
    {
        short CHOICE4;
__HERE4:
        cout<<"Please Enter Option Number :\n(1)For Rate Of Return\n(2)For Range\n(3)For Project Risk/Return\n(4)For Coefficient Of Variance (CV)\n(5)For Portfolio Return\n(6)For Portfolio Risk\n(7)For Portfolio Beta\n(8)For Capital Asset Pricing Model (CAPM)\n";
        cin>>CHOICE4;
        ///CH4 Class & Functions
        Chapter4 CH4;
        if(CHOICE4 == 1)
        {
            CH4.RateOfReturn();
        }
        else if(CHOICE4 == 2)
        {
            CH4.Range();
        }
        else if(CHOICE4 == 3)
        {
            CH4.ProjectRiskReturn();
        }
        else if(CHOICE4 == 4)
        {
            CH4.CoefficientOfVariance();
        }
        else if(CHOICE4 == 5)
        {
            CH4.PortfolioReturn();
        }
        else if(CHOICE4 == 6)
        {
            CH4.PortfolioRisk();
        }
        else if(CHOICE4 == 7)
        {
            CH4.PortfolioBeta();
        }
        else if(CHOICE4 == 8)
        {
            CH4.CapitalAssetPricingModelCAPM();
        }
        else
        {
            cout<<"Please Make Sure That You Have Entered Option Number (1),(2),(3),(4),(5),(6),(7),(8)\n";
            goto __HERE4;
        }
    }
    else if(CH == 5)
    {
        short CHOICE5;
__HERE5:
        cout<<"Please Enter Option Number :\n(1)For Bond Value(Perpetual Or Maturity)\n(2)For Current Yield (CV)\n(3)For Yield To Maturity (YTM)\n";
        cin>>CHOICE5;
        ///CH5 Class & Functions
        Chapter5 CH5;
        if(CHOICE5 == 1)
        {
            CH5.BondValue();
        }
        else if(CHOICE5 == 2)
        {
            CH5.CurrentYield();
        }
        else if(CHOICE5 == 3)
        {
            CH5.YieldToMaturity();
        }
        else
        {
            cout<<"Please Make Sure That You Have Option Number (1),(2),(3)\n";
            goto __HERE5;
        }
    }
    else if(CH == 6)
    {
        short CHOICE6;
__HERE6:
        cout<<"Please Enter Option Number : \n(1)For Zero Growth Model\n(2)For Constant Growth (Gordon) Model\n(3)For Variable Growth Model\n(4)For Free Cash Flow Model\n(5)For Book Value Per Share(BVPS)\n(6)For Liquidation Value Per Share\n(7)For Price Earnings (P/E) Ratio Valuation\n";
        cin>>CHOICE6;
        ///CH6 Class & Functions
        Chapter6 CH6;
        if(CHOICE6 == 1)
        {
            CH6.ZeroGrowthModel();
        }
        else if(CHOICE6 == 2)
        {
            CH6.GordonModel();
        }
        else if(CHOICE6 == 3)
        {
            CH6.VariableGrowthModel();
        }
        else if(CHOICE6 == 4)
        {
            CH6.FreeCashFlowModel();
        }
        else if(CHOICE6 == 5)
        {
            CH6.BookValuePerShare();
        }
        else if(CHOICE6 == 6)
        {
            CH6.LiquidationValuePerShare();
        }
        else if(CHOICE6 == 7)
        {
            CH6.PriceEarningsRatioValuation();
        }
        else
        {
            cout<<"Please Make Sure That You Have Entered Option Number (1),(2),(3),(4),(5),(6),(7)\n";
            goto __HERE6;
        }
    }
    else if(CH == 7)
    {
        short CHOICE7;
__HERE7:
        cout<<"Please Enter Option Number : \n(1)For Cost Of Long-Term Debt (Using Current Yield (CV))\n(2)For Cost Of Long-Term Debt\n(3)For Cost Of Common Stock Equity\n(4)For Cost Of New Issue Of Common Stock\n(5)For Weighted Average Cost Of Capital (WACC)\n";
        cin>>CHOICE7;
        ///CH7 Class & Functions
        Chapter7 CH7;
        if(CHOICE7 == 1)
        {
            CH7.CostOfLongTermDebtCurrentYield();
        }
        else if(CHOICE7 == 2)
        {
            CH7.CostOfLongTermDebt();
        }
        else if(CHOICE7 == 3)
        {
            CH7.CostOfCommonStockEquity();
        }
        else if(CHOICE7 == 4)
        {
            CH7.CostOfNewIssueOfCommonStock();
        }
        else if(CHOICE7 == 5)
        {
            CH7.WeightedAverageCostOfCapital();
        }
        else
        {
            cout<<"Please Make Sure That You Have Entered Option Number (1),(2),(3),(4),(5)\n";
            goto __HERE7;
        }
    }
    else if(CH == 8)
    {
        short CHOICE8;
__HERE8:
        cout<<"Please Enter Option Number : \n(1)For Net Present Value (NPV)\n(2)For Profitability Index (PI)\n(3)For Internal Rate Of Return (IRR)\n(4)For Modified Internal Rate Of Return (MIRR)\n(5)For Payback Period (PB)\n(6)For Discounted Payback Period (DPB)\n";
        cin>>CHOICE8;
        ///CH8 Class & Functions
        Chapter8 CH8;
        if(CHOICE8 == 1)
        {
            CH8.NetPresentValueNPV();
        }
        else if(CHOICE8 == 2)
        {
            CH8.ProfitabilityIndexPI();
        }
        else if(CHOICE8 == 3)
        {
            CH8.InternalRateOfReturnIRR();
        }
        else if(CHOICE8 == 4)
        {
            CH8.ModifiedInternalRateOfReturnMIRR();
        }
        else if(CHOICE8 == 5)
        {
            CH8.PaybackPeriodPB();
        }
        else if(CHOICE8 == 6)
        {
            CH8.DiscountedPaybackPeriodDPB();
        }
        else
        {
            cout<<"Please Make Sure That You Have Entered Option Number (1),(2),(3),(4),(5),(6)\n";
            goto __HERE8;
        }
    }
    else
    {
        cout<<"Please Make Sure That You Have Entered (3),(4),(5),(6),(7) OR (8)\n";
        goto __POINT;
    }
    return 0;
}
