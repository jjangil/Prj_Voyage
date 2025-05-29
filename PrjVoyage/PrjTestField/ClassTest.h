#pragma once
#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
using namespace std;

#define SUMMARY_PRINT_SPEED 1               //게임 개요 출력 속도 정의
#define ENDING_PRINT_SPEED 1                //종료 화면 출력 속도 정의
#define EASY_LEVEL_GOLD 15000               //쉬움 난이도 시작골드 정의
#define NOMAL_LEVEL_GOLD 12000              //보통 난이도 시작골드 정의
#define HARD_LEVEL_GOLD 7500                //어려움 난이도 시작골드 정의
#define MAXCOUNTRY 5
#define TEMP 5                              //UI 임시 상수
#define UI_BOAT 47                          //이동하는 보트 움직임 출력횟수
#define RANDOMPRICE 500
#define PRODUCT_ROWSIZE 5 
#define PRODUCT_COLSIZE 2
#define COUNTRYINFO_PRINT_DELAY 0           //국가명, 지역정보 출력 딜레이
#define RANDOM_FIRST_PRODUCTPRICE 500       //1번 상품 시세변동폭
#define RANDOM_SECOND_PRODUCTPRICE 500      //2번 상품 시세변동폭

extern int nGameClearNumber = 0;   // 게임 플레이 전역변수
extern int sailing = 1;            // 반복문에서 사용하는 전역 변수

class ClassCountryInfo
{
    /*
       strCountryName               : 국가 명칭
       strRegionDepiction           : 지역 설명
       strFirstProductName          : 1번 상품 명칭
       strSecondProductName         : 2번 상품 명칭
       strFirstProductDepiction     : 1번 상품 설명
       strSecondProductDepiction    : 2번 상품 설명
       nFirstProductPrice           : 1번 상품 가격
       nSecondProductPrice          : 2번 상품 가격
    */

    /*
       # String

       - C에서는 char* 또는 char[] 의 형태로 문자열을 다뤘다면, C++에서는 문자열을 하나의 변수 type처럼 사용하며, 문자열을 훨씬 다양하고 쉽게 다룰 수 있게 해 준다.
       - char* , char[] 과 다르게 문자열의 끝에 '\0' 문자가 들어가지 않으며, 문자열의 길이를 동적으로 변경 가능하다.
    */
public:

    string strCountryName, strRegionDepiction, strFirstProductName, strSecondProductName, strFirstProductDepiction, strSecondProductDepiction;
    int nFirstProductPrice, nSecondProductPrice;

    //교역정보 객체 생성자
    ClassCountryInfo(
        string CountryName = "국가 명칭",
        string RegionDepiction = "지역 설명",
        string FirstProductName = "1번 상품명칭",
        string SecondProductName = "2번 상품명칭",
        string FirstProductDepiction = "1번 상품설명",
        string SecondProductDepiction = "2번 상품설명",
        int FirstProductPrice = 0,
        int SecondProductPrice = 0) :
        strCountryName(CountryName),
        strRegionDepiction(RegionDepiction),
        strFirstProductName(FirstProductName),
        strSecondProductName(SecondProductName),
        strFirstProductDepiction(FirstProductDepiction),
        strSecondProductDepiction(SecondProductDepiction),
        nFirstProductPrice(FirstProductPrice),
        nSecondProductPrice(SecondProductPrice) {}

    //교역정보 객체 소멸자
    ~ClassCountryInfo() {}

    void f_Print_CountryData()
    {
        string strFirstDepiction, strSecondDepiction;
        int nFirstDepictionLength = 0, nSecondDepictionLength = 0;

        strFirstDepiction = strCountryName;
        strSecondDepiction = strRegionDepiction;

        nFirstDepictionLength = int(strFirstDepiction.length());
        nSecondDepictionLength = int(strSecondDepiction.length());

        cout << "\n\t\t\t\t\t\t\t";
        for (int i = 0; i < nFirstDepictionLength; i++)
        {
            printf("%c", strFirstDepiction[i]);
            Sleep(COUNTRYINFO_PRINT_DELAY);
        }

        cout << "\n\n";
        for (int i = 0; i < nSecondDepictionLength; i++)
        {
            printf("%c", strSecondDepiction[i]);
            Sleep(COUNTRYINFO_PRINT_DELAY);
        }
    }
};

class ClassUIVoyage //서장일ver. f_Print_EndingCredit(); 상속 받기 위해 UIVoyage를 위로 올렸음
{
public:

    void f_Print_Intro()
    {
        cout << "      ______                 _              _     _   _                                   " << endl;
        cout << "      | ___ \\               (_)            | |   | | | |                                  " << endl;
        cout << "      | |_/ / _ __   ___     _   ___   ___ | |_  | | | |  ___   _   _   __ _   __ _   ___ " << endl;
        cout << "      |  __/ | '__| / _ \\   | | / _ \\ / __|| __| | | | | / _ \\ | | | | / _` | / _` | / _ \\" << endl;
        cout << "      | |    | |   | (_) |  | ||  __/| (__ | |_  \\ \\_/ /| (_) || |_| || (_| || (_| ||  __/" << endl;
        cout << "      \\_|    |_|    \\___/   | | \\___| \\___| \\__|  \\___/  \\___/  \\__, | \\__,_| \\__, | \\___|" << endl;
        cout << "                           _/ |                                  __/ |         __/ |      " << endl;
        cout << "                          |__/                                  |___/         |___/       " << endl;
    }

    void f_Print_SailingBoat()
    {
        int nUIBoat = 0;

        while (nUIBoat < UI_BOAT)
        {
            system("cls");

            for (int i = 0; i < nUIBoat; i++)
            {
                cout << " ";
            }
            cout << "              ," << endl;

            for (int i = 0; i < nUIBoat; i++)
            {
                cout << " ";
            }
            cout << "              |\" - , _" << endl;

            for (int i = 0; i < nUIBoat; i++)
            {
                cout << " ";
            }
            cout << "              I--(_" << endl;

            for (int i = 0; i < nUIBoat; i++)
            {
                cout << " ";
            }
            cout << "             ,I?8," << endl;

            for (int i = 0; i < nUIBoat; i++)
            {
                cout << " ";
            }
            cout << "             d|`888." << endl;

            for (int i = 0; i < nUIBoat; i++)
            {
                cout << " ";
            }
            cout << "            d8| 8888b" << endl;

            for (int i = 0; i < nUIBoat; i++)
            {
                cout << " ";
            }
            cout << "           ,88| ?8888b" << endl;

            for (int i = 0; i < nUIBoat; i++)
            {
                cout << " ";
            }
            cout << "          ,888| `88888b" << endl;

            for (int i = 0; i < nUIBoat; i++)
            {
                cout << " ";
            }
            cout << "         ,8888|  8888g8b" << endl;

            for (int i = 0; i < nUIBoat; i++)
            {
                cout << " ";
            }
            cout << "        ,88888|  888PX?8b" << endl;

            for (int i = 0; i < nUIBoat; i++)
            {
                cout << " ";
            }
            cout << "       ,888888|  8888bd88," << endl;

            for (int i = 0; i < nUIBoat; i++)
            {
                cout << " ";
            }
            cout << "      o8888888| ,888888888" << endl;

            for (int i = 0; i < nUIBoat; i++)
            {
                cout << " ";
            }
            cout << "     d8888888P| d888888888b" << endl;

            for (int i = 0; i < nUIBoat; i++)
            {
                cout << " ";
            }
            cout << "  _.d888gggg8'| 8gg88888888," << endl;

            for (int i = 0; i < nUIBoat; i++)
            {
                cout << " ";
            }
            cout << " '\\==-,,,,,,,,|/;,,,,,-==;7" << endl;

            for (int i = 0; i < nUIBoat; i++)
            {
                cout << " ";
            }
            cout << " _ \\__...____...__    __/ _ _" << endl;

            for (int i = 0; i < nUIBoat; i++)
            {
                cout << " ";
            }
            cout << "   ~              ~~~~  ~~" << endl;

            Sleep(100);

            nUIBoat++;
        }
    }

    void f_Print_VoyageDepiction()
    {
        string strVoyageDepiction1, strVoyageDepiction2, strVoyageDepiction3, strVoyageDepiction4;
        int nDepictionLength1, nDepictionLength2, nDepictionLength3, nDepictionLength4;

        strVoyageDepiction1 = "\"Project Voyage\"는 C로 쓰인 \"UnchartedWaters_by_Sj\"를 C++로 트랜스 파일링하고 기능을 추가하는 프로젝트 입니다.";
        strVoyageDepiction2 = " 이 게임은 일본 KOEI 사의 비디오 게임인 Uncharted Waters, 大航海時代 시리즈에서 착안하여 제작된 간단한 교역 게임입니다.";
        strVoyageDepiction3 = " 이 게임에서 펼쳐질 항해자 여러분들의 모험담을 기다리고 있습니다.";
        strVoyageDepiction4 = " 미지의 먼 바다를 향한 항해가 시작 됩니다!";

        nDepictionLength1 = int(strVoyageDepiction1.length());
        nDepictionLength2 = int(strVoyageDepiction2.length());
        nDepictionLength3 = int(strVoyageDepiction3.length());
        nDepictionLength4 = int(strVoyageDepiction4.length());

        for (int i = 0; i < nDepictionLength1; i++)
        {
            printf("%c", strVoyageDepiction1[i]);
            Sleep(SUMMARY_PRINT_SPEED);
        }
        cout << "\n\n";

        for (int i = 0; i < nDepictionLength2; i++)
        {
            printf("%c", strVoyageDepiction2[i]);
            Sleep(SUMMARY_PRINT_SPEED);
        }
        cout << "\n\n";

        for (int i = 0; i < nDepictionLength3; i++)
        {
            printf("%c", strVoyageDepiction3[i]);
            Sleep(SUMMARY_PRINT_SPEED);
        }
        cout << "\n\n";

        for (int i = 0; i < nDepictionLength4; i++)
        {
            printf("%c", strVoyageDepiction4[i]);
            Sleep(SUMMARY_PRINT_SPEED);
        }
        cout << "\n\n";

        system("pause");
        system("cls");
    }

    void f_Print_EndingCredit()
    {
        string strEndingDepiction1, strEndingDepiction2, strEndingDepiction3, strEndingDepiction4;
        int nDepictionLength1, nDepictionLength2, nDepictionLength3, nDepictionLength4;

        strEndingDepiction1 = "\t\t\t\t     Project Voyage를 플레이해 주셔서 감사합니다!\n\n";
        strEndingDepiction2 = "\t\t\t\t\t\t\t제작\n\n";
        strEndingDepiction3 = "\t\t\t\t\t\t    팀장 : 김상주\n\n";
        strEndingDepiction4 = "\t\t\t\t\t    팀원 : 서장일, 명승훈, 양승현\n\n";

        nDepictionLength1 = int(strEndingDepiction1.length());
        nDepictionLength2 = int(strEndingDepiction2.length());
        nDepictionLength3 = int(strEndingDepiction3.length());
        nDepictionLength4 = int(strEndingDepiction4.length());

        for (int i = 0; i < nDepictionLength1; i++)
        {
            printf("%c", strEndingDepiction1[i]);
            Sleep(SUMMARY_PRINT_SPEED);
        }
        cout << "\n\n";

        for (int i = 0; i < nDepictionLength2; i++)
        {
            printf("%c", strEndingDepiction2[i]);
            Sleep(SUMMARY_PRINT_SPEED);
        }
        cout << "\n\n";

        for (int i = 0; i < nDepictionLength3; i++)
        {
            printf("%c", strEndingDepiction3[i]);
            Sleep(SUMMARY_PRINT_SPEED);
        }
        cout << "\n\n";

        for (int i = 0; i < nDepictionLength4; i++)
        {
            printf("%c", strEndingDepiction4[i]);
            Sleep(SUMMARY_PRINT_SPEED);
        }
        cout << "\n\n";
    }

    void f_ActOff()
    {
        cout << "[게임종료]를 선택하셨습니다." << endl;
        Sleep(1000);
        system("cls");
        f_Print_EndingCredit(); //엔딩 함수호출
        Sleep(3000);
        system("cls");
        cout << "게임을 종료합니다...." << endl;
        exit(0);
    }

};

//게임 진행 클래스
class ClassPlayVoyage : public ClassCountryInfo, public ClassUIVoyage
{
public:

    ClassCountryInfo Country[MAXCOUNTRY]; //국가 객체 배열
    int ProductNumber[PRODUCT_ROWSIZE][PRODUCT_COLSIZE]; //상품 선택을 위한 이중배열

    /*
        [변수 초기화]

        nCountry        : 국가 객체 추가를 위한 변수
        nRandomCountry  : 랜덤으로 변경된 국가 변수
        nPlayerGold     : 플레이어가 사용하는 재화 변수
        sailing         : 다음 항구 변환을 위한 변수
        nProductPrice1  : 1번상품 랜덤으로 변경된 시세를 사용하기 위한 변수
        nProductPrice2  : 2번상품 랜덤으로 변경된 시세를 사용하기 위한 변수
    */
    int nCountry = 0, nRandomCountry = 0, nPlayerGold = 0, nProductPrice1 = 0, nProductPrice2 = 0, nGameClearNumber = 0;

    
    //국가 객체 생성 함수
    void f_AddCountry(ClassCountryInfo& CountryData)
    {
        if (nCountry < MAXCOUNTRY)
        {
            Country[nCountry++] = CountryData;
        }
    }

    void f_EnterPort()
    {
        int nUserPick = 0;

        srand((unsigned)time(NULL)); //랜덤 seed 변경을 위한 초기화
        nRandomCountry = rand() % MAXCOUNTRY;  //랜덤으로 국가 변경

        f_Print_SailingBoat();
        cout << "선장님! " << Country[nRandomCountry].strCountryName << " 항구가 보입니다!" << endl;
        cout << Country[nRandomCountry].strCountryName << "에 입항하시겠습니까?" << endl;
        cout << "[1] : 네, [2] : 아니오";
        cin >> nUserPick;

        switch (nUserPick)
        {
        case 1:
            cout << Country[nRandomCountry].strCountryName << " 에 입항합니다!" << endl;

            break;

        case 2:
            cout << Country[nRandomCountry].strCountryName << " 에 입항하지 않습니다. 다음 항구로 이동합니다!" << endl;
            f_EnterPort();

            break;

        default:
            cout << "잘못된 입력입니다. 다시 입력해주세요!";
        }
    }

    //상품 선택을 위한 이중배열 초기화 함수
    void f_ArrayProdcutInit()
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                ProductNumber[i][j] = 0; //이중 배열 초기화
            }
        }
    }

    //난이도 설정 함수
    void f_set_level()
    {
        int level = 0;

        cout << "난이도를 선택하세요" << endl;
        cout << "[1] 쉬움, [2] 보통, [3] 어려움" << endl;
        cin >> level;
        system("cls");

        switch (level)
        {
        case 1:
            nPlayerGold = EASY_LEVEL_GOLD;

            for (int i = 5; i > 0; i--)
            {
                cout << "쉬움 난이도를 선택였습니다." << endl;
                cout << "초기 자금 : " << nPlayerGold << endl;
                cout << i << "초 후 게임이 시작됩니다." << endl;

                Sleep(1000);
                system("cls");
            }
            break;

        case 2:
            nPlayerGold = NOMAL_LEVEL_GOLD;

            for (int i = 5; i > 0; i--)
            {
                cout << "보통 난이도를 선택였습니다." << endl;
                cout << "초기 자금 : " << nPlayerGold << endl;
                cout << i << "초 후 게임이 시작됩니다." << endl;

                Sleep(1000);
                system("cls");
            }
            break;

        case 3:
            nPlayerGold = HARD_LEVEL_GOLD;

            for (int i = 5; i > 0; i--)
            {
                cout << "어려움 난이도를 선택였습니다." << endl;
                cout << "초기 자금 : " << nPlayerGold << endl;
                cout << i << "초 후 게임이 시작됩니다." << endl;

                Sleep(1000);
                system("cls");
            }
            break;

        default:
            cout << "잘못된 입력입니다. 난이도를 다시 선택해주세요." << endl;
            Sleep(2000);
            system("cls");

            f_set_level(); //재귀함수(본인 재호출)
            break;
        }
    }

    //랜덤 시세변경 함수
    void f_RandomProductPrice()
    {
        /*
            nVariationNumber1   :  1번 상품 시세 변경 랜덤값 
            nVariationNumber2   :  2번 상품 시세 변경 랜덤값
            nFluctuationNumber  :  상품 시세 등락 선택값
        */
        int nVariationNumber1 = 0, nVariationNumber2 = 0, nFluctuationNumber = 0;

        srand((unsigned)time(NULL));

        nVariationNumber1 = rand() % RANDOM_FIRST_PRODUCTPRICE;     //1번 상품 랜덤 시세 변경
        nVariationNumber2 = rand() % RANDOM_SECOND_PRODUCTPRICE;    //2번 상품 랜덤 시세 변경
        nFluctuationNumber = rand() % 2; //상품 시세 등락 선택

        if (nFluctuationNumber == 1)
        {
            //상품 가격이 음수인 경우를 방지하기 위한 조건

            if (nVariationNumber1 || nVariationNumber2 < 0)
            {
                nProductPrice1 = (nFirstProductPrice - nVariationNumber1) + 500;
                nProductPrice2 = (nSecondProductPrice - nVariationNumber2) + 500;
            }
            else
            {
                nProductPrice1 = nFirstProductPrice - nVariationNumber1;
                nProductPrice2 = nSecondProductPrice - nVariationNumber2;
            }

            //nFirstProductPrice -= nVariationNumber1;
            //nSecondProductPrice -= nVariationNumber2;
        }
        else
        {
            nProductPrice1 = nFirstProductPrice + nVariationNumber1;
            nProductPrice2 = nSecondProductPrice + nVariationNumber2;

            //nFirstProductPrice += nVariationNumber1;
            //nSecondProductPrice += nVariationNumber2;
        }
    }

    //교역 정보 출력 함수
    void f_Print_CommerceData()
    {
        cout << "\n\n" << endl;
        cout << "\t국가/상품/상품가격 출력" << endl;
        cout << Country[nRandomCountry].strCountryName << " 교역소 " << endl;
        cout << Country[nRandomCountry].strFirstProductName << " : " << Country[nRandomCountry].strFirstProductDepiction << endl;
        cout << Country[nRandomCountry].strSecondProductName << " : " << Country[nRandomCountry].strSecondProductDepiction << endl;
        cout << Country[nRandomCountry].strFirstProductName << " : " << nProductPrice1 << endl;
        cout << Country[nRandomCountry].strSecondProductName << " : " << nProductPrice2 << endl;
    }

    //구매 함수
    void f_ActPurchase()
    {
        string strDepiction;
        int nProductNumber = 0, nDepictionLength = 0;

        strDepiction = "[구매한다]를 선택 하였습니다. 구매 메뉴로 이동합니다.";
        nDepictionLength = int(strDepiction.length());

        cout << "\n\t";
        for (int i = 0; i < nDepictionLength; i++)
        {
            printf("%c", strDepiction[i]);
            Sleep(0);
        }

        Sleep(500);
        system("cls");

        //cout << strCountryName << " 교역소";
        cout << Country[nRandomCountry].strCountryName << " 교역소" << endl;

        //cout << "[1] : " << strFirstProductName << "\n" << "[2] : " << strSecondProductName << endl;
        cout << "[1] : " << Country[nRandomCountry].strFirstProductName << " : " << nProductPrice1 << endl;
        cout << "[2] : " << Country[nRandomCountry].strSecondProductName << " : " << nProductPrice2 << endl;

        cin >> nProductNumber; // == scanf("%d", &nProductNumber);

        switch (nProductNumber)
        {
        case 1: //1번 상품 구매
            cout << Country[nRandomCountry].strFirstProductName << " 구매" << endl;

            ProductNumber[nRandomCountry][0]++;
            //nPlayerGold -= nFirstProductPrice;
            nPlayerGold -= nProductPrice1;
            break;

        case 2:   //2번 상품 구매
            cout << Country[nRandomCountry].strSecondProductName << " 구매" << endl;

            ProductNumber[nRandomCountry][1]++;
            //nPlayerGold -= nSecondProductPrice;
            nPlayerGold -= nProductPrice2;
            break;

        default:
            cout << "잘못된 입력입니다. 다시 입력해주세요." << endl;
            f_ActPurchase();
            break;
        }
    }

    //판매 함수
    void f_ActSell()
    {
        string strDepiction;
        int nProductNumber = 0, nDepictionLength = 0;

        strDepiction = "[판매한다]를 선택 하였습니다. 판매 메뉴로 이동합니다.";
        nDepictionLength = int(strDepiction.length());

        cout << "\n\t";
        for (int i = 0; i < nDepictionLength; i++)
        {
            printf("%c", strDepiction[i]);
            Sleep(0);
        }

        Sleep(500);
        system("cls");

        //cout << strCountryName << " 교역소";
        cout << Country[nRandomCountry].strCountryName << " 교역소" << endl;

        //cout << "[1] : " << strFirstProductName << "\n" << "[2] : " << strSecondProductName << endl;
        cout << "[1] : " << Country[nRandomCountry].strFirstProductName << " : " << nProductPrice1 << endl;
        cout << "[2] : " << Country[nRandomCountry].strSecondProductName << " : " << nProductPrice2 << endl;

        cin >> nProductNumber; // == scanf("%d", &nProductNumber);

        switch (nProductNumber)
        {
        case 1: //1번 상품 판매
            cout << Country[nRandomCountry].strFirstProductName << " 판매" << endl;

            ProductNumber[nRandomCountry][0]--;
            //nPlayerGold -= nFirstProductPrice;
            nPlayerGold += nProductPrice1;
            break;

        case 2: //2번 상품 판매
            cout << Country[nRandomCountry].strSecondProductName << " 판매" << endl;

            ProductNumber[nRandomCountry][1]--;
            //nPlayerGold -= nSecondProductPrice;
            nPlayerGold += nProductPrice2;
            break;

        default:
            cout << "잘못된 입력입니다. 다시 입력해주세요." << endl;
            f_ActPurchase();
            break;
        }
    }

    void f_ActCheck() // 보유 물건 확인하는 함수
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                ProductNumber[i][j]; // 보유 중인 물건을 배열로 출력
            }
        }
        cout << "[1] : " << Country[nRandomCountry].strFirstProductName << "  " << ProductNumber[nRandomCountry][0] << endl;
        cout << "[2] : " << Country[nRandomCountry].strSecondProductName << "  " << ProductNumber[nRandomCountry][1] << endl;
    }

    //국가, 지역설명 출력 함수
    void f_Print_CountryName_RegionDepiction()
    {
        Country[nRandomCountry].f_Print_CountryData();
    }

    void f_ActNextCountry() // 다음 항구 가는 함수
    {
        cout << "다음 항구로 이동합니다!" << endl;
        sailing = 0;
    }

    void f_PrintNextCountry()  // 다음 항구 가는 구문 출력 함수
    {
        system("cls");
        cout << "\t더 이상 거래 할 수 없습니다." << endl;
        cout << "\t다음 항구로 넘어갑니다." << endl;
    }

    //교역 함수
    void f_Commerce()
    {
        int nUserPick = 0;

        f_Print_CountryName_RegionDepiction(); //국가명, 지역설명 출력함수


        f_Print_CommerceData(); //교역정보 출력함수()
        cout << nGameClearNumber << endl;
        cout << "보유 골드 : "<< nPlayerGold << endl;
        cout << "수행할 행동을 선택하세요!" << endl;
        cout << "[1]번 구매하기, [2]번 판매하기, [3]번 내 물품 확인하기, [4]번 다음 항구가기" << endl;
        cin >> nUserPick;

        switch (nUserPick)
        {
        case 1: //구매 함수
            f_ActPurchase();
            nGameClearNumber++;
            break;

        case 2: //판매 함수
            f_ActSell();
            nGameClearNumber++;
            break;

        case 3: // 보유 물건 확인 함수
            f_ActCheck();
            break;

        case 4: // 다음 항구 가는 함수
            nGameClearNumber = 0; //선행 초기화가 필수이므로 함수보다 먼저 위치한다.
            f_ActNextCountry();
            
            /*
            if (nGameClearNumber == 3)
            {
                cout << "다음 항구로 가시겠습니까?" << endl;
                getchar();
                nGameClearNumber = 0;
                f_ActNextCountry();
            }
            else
            {
                cout << "입항 허가가 나오지 않았습니다." << endl;
                f_Commerce();
            }
            */

            break;

        case 5:
            /*
               데이터 저장(골드) 및 종료 함수()
            */
            break;

        default:

            cout << "잘못된 입력입니다. 다시 입력해주세요." << endl;
            f_Commerce();
            break;
        }

        if (nPlayerGold < 1000)         //서장일ver.얼마 미만 or 초과시 게임 엔딩 스토리(작동됩니다.)
        {
            cout << "보유하신 골드(화폐)가 " << nPlayerGold << "G이하로 파산입니다" << endl;
            f_Print_EndingCredit();
            exit(0);
        }
        else if (nPlayerGold > 16000)
        {
            cout << "보유하신 골드(화폐)가 50000G를 넘어 국왕의 신임을 얻었습니다! 작위를 하사받습니다!" << endl;
            f_Print_EndingCredit();
            exit(0);
        }
        else if (ProductNumber[0][0] >= 5) //0번국가 : 에스파냐, 0번 상품 : 쉐리, 에스파냐의 1번상품인 쉐리가 5개이상이라면 
        {
            cout << "쉐리가 가격 상승으로 부호엔딩" << endl;
            Sleep(500);
            system("cls");
            f_Print_EndingCredit();
            exit(0);
        }
        else if (ProductNumber[1][1] >= 5)
        {
            cout << "보유하고 계신 아몬드가 모조리 상해서 거지엔딩" << endl;
            Sleep(500);
            system("cls");
            f_Print_EndingCredit();
            exit(0);
        }
        else if (ProductNumber[2][1] >= 5)
        {
            cout << " 유리세공이 서로 충돌해 모조리 파괴돼 거지엔딩" << endl;
            Sleep(500);
            system("cls");
            f_Print_EndingCredit();
            exit(0);
        }
        else if (ProductNumber[4][1] >= 5)
        {
            cout << "진의 수요가 많아짐에 따라 가격 폭등 부호엔딩" << endl;
            Sleep(500);
            system("cls");
            f_Print_EndingCredit();
            exit(0);
        }
        else
        {
            return;
        }
    }


};

