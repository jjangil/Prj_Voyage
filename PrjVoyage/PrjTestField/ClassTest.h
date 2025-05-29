#pragma once
#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
using namespace std;

#define SUMMARY_PRINT_SPEED 1               //���� ���� ��� �ӵ� ����
#define ENDING_PRINT_SPEED 1                //���� ȭ�� ��� �ӵ� ����
#define EASY_LEVEL_GOLD 15000               //���� ���̵� ���۰�� ����
#define NOMAL_LEVEL_GOLD 12000              //���� ���̵� ���۰�� ����
#define HARD_LEVEL_GOLD 7500                //����� ���̵� ���۰�� ����
#define MAXCOUNTRY 5
#define TEMP 5                              //UI �ӽ� ���
#define UI_BOAT 47                          //�̵��ϴ� ��Ʈ ������ ���Ƚ��
#define RANDOMPRICE 500
#define PRODUCT_ROWSIZE 5 
#define PRODUCT_COLSIZE 2
#define COUNTRYINFO_PRINT_DELAY 0           //������, �������� ��� ������
#define RANDOM_FIRST_PRODUCTPRICE 500       //1�� ��ǰ �ü�������
#define RANDOM_SECOND_PRODUCTPRICE 500      //2�� ��ǰ �ü�������

extern int nGameClearNumber = 0;   // ���� �÷��� ��������
extern int sailing = 1;            // �ݺ������� ����ϴ� ���� ����

class ClassCountryInfo
{
    /*
       strCountryName               : ���� ��Ī
       strRegionDepiction           : ���� ����
       strFirstProductName          : 1�� ��ǰ ��Ī
       strSecondProductName         : 2�� ��ǰ ��Ī
       strFirstProductDepiction     : 1�� ��ǰ ����
       strSecondProductDepiction    : 2�� ��ǰ ����
       nFirstProductPrice           : 1�� ��ǰ ����
       nSecondProductPrice          : 2�� ��ǰ ����
    */

    /*
       # String

       - C������ char* �Ǵ� char[] �� ���·� ���ڿ��� �ٷ�ٸ�, C++������ ���ڿ��� �ϳ��� ���� typeó�� ����ϸ�, ���ڿ��� �ξ� �پ��ϰ� ���� �ٷ� �� �ְ� �� �ش�.
       - char* , char[] �� �ٸ��� ���ڿ��� ���� '\0' ���ڰ� ���� ������, ���ڿ��� ���̸� �������� ���� �����ϴ�.
    */
public:

    string strCountryName, strRegionDepiction, strFirstProductName, strSecondProductName, strFirstProductDepiction, strSecondProductDepiction;
    int nFirstProductPrice, nSecondProductPrice;

    //�������� ��ü ������
    ClassCountryInfo(
        string CountryName = "���� ��Ī",
        string RegionDepiction = "���� ����",
        string FirstProductName = "1�� ��ǰ��Ī",
        string SecondProductName = "2�� ��ǰ��Ī",
        string FirstProductDepiction = "1�� ��ǰ����",
        string SecondProductDepiction = "2�� ��ǰ����",
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

    //�������� ��ü �Ҹ���
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

class ClassUIVoyage //������ver. f_Print_EndingCredit(); ��� �ޱ� ���� UIVoyage�� ���� �÷���
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

        strVoyageDepiction1 = "\"Project Voyage\"�� C�� ���� \"UnchartedWaters_by_Sj\"�� C++�� Ʈ���� ���ϸ��ϰ� ����� �߰��ϴ� ������Ʈ �Դϴ�.";
        strVoyageDepiction2 = " �� ������ �Ϻ� KOEI ���� ���� ������ Uncharted Waters, ���������� �ø���� �����Ͽ� ���۵� ������ ���� �����Դϴ�.";
        strVoyageDepiction3 = " �� ���ӿ��� ������ ������ �����е��� ������� ��ٸ��� �ֽ��ϴ�.";
        strVoyageDepiction4 = " ������ �� �ٴٸ� ���� ���ذ� ���� �˴ϴ�!";

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

        strEndingDepiction1 = "\t\t\t\t     Project Voyage�� �÷����� �ּż� �����մϴ�!\n\n";
        strEndingDepiction2 = "\t\t\t\t\t\t\t����\n\n";
        strEndingDepiction3 = "\t\t\t\t\t\t    ���� : �����\n\n";
        strEndingDepiction4 = "\t\t\t\t\t    ���� : ������, �����, �����\n\n";

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
        cout << "[��������]�� �����ϼ̽��ϴ�." << endl;
        Sleep(1000);
        system("cls");
        f_Print_EndingCredit(); //���� �Լ�ȣ��
        Sleep(3000);
        system("cls");
        cout << "������ �����մϴ�...." << endl;
        exit(0);
    }

};

//���� ���� Ŭ����
class ClassPlayVoyage : public ClassCountryInfo, public ClassUIVoyage
{
public:

    ClassCountryInfo Country[MAXCOUNTRY]; //���� ��ü �迭
    int ProductNumber[PRODUCT_ROWSIZE][PRODUCT_COLSIZE]; //��ǰ ������ ���� ���߹迭

    /*
        [���� �ʱ�ȭ]

        nCountry        : ���� ��ü �߰��� ���� ����
        nRandomCountry  : �������� ����� ���� ����
        nPlayerGold     : �÷��̾ ����ϴ� ��ȭ ����
        sailing         : ���� �ױ� ��ȯ�� ���� ����
        nProductPrice1  : 1����ǰ �������� ����� �ü��� ����ϱ� ���� ����
        nProductPrice2  : 2����ǰ �������� ����� �ü��� ����ϱ� ���� ����
    */
    int nCountry = 0, nRandomCountry = 0, nPlayerGold = 0, nProductPrice1 = 0, nProductPrice2 = 0, nGameClearNumber = 0;

    
    //���� ��ü ���� �Լ�
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

        srand((unsigned)time(NULL)); //���� seed ������ ���� �ʱ�ȭ
        nRandomCountry = rand() % MAXCOUNTRY;  //�������� ���� ����

        f_Print_SailingBoat();
        cout << "�����! " << Country[nRandomCountry].strCountryName << " �ױ��� ���Դϴ�!" << endl;
        cout << Country[nRandomCountry].strCountryName << "�� �����Ͻðڽ��ϱ�?" << endl;
        cout << "[1] : ��, [2] : �ƴϿ�";
        cin >> nUserPick;

        switch (nUserPick)
        {
        case 1:
            cout << Country[nRandomCountry].strCountryName << " �� �����մϴ�!" << endl;

            break;

        case 2:
            cout << Country[nRandomCountry].strCountryName << " �� �������� �ʽ��ϴ�. ���� �ױ��� �̵��մϴ�!" << endl;
            f_EnterPort();

            break;

        default:
            cout << "�߸��� �Է��Դϴ�. �ٽ� �Է����ּ���!";
        }
    }

    //��ǰ ������ ���� ���߹迭 �ʱ�ȭ �Լ�
    void f_ArrayProdcutInit()
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                ProductNumber[i][j] = 0; //���� �迭 �ʱ�ȭ
            }
        }
    }

    //���̵� ���� �Լ�
    void f_set_level()
    {
        int level = 0;

        cout << "���̵��� �����ϼ���" << endl;
        cout << "[1] ����, [2] ����, [3] �����" << endl;
        cin >> level;
        system("cls");

        switch (level)
        {
        case 1:
            nPlayerGold = EASY_LEVEL_GOLD;

            for (int i = 5; i > 0; i--)
            {
                cout << "���� ���̵��� ���ÿ����ϴ�." << endl;
                cout << "�ʱ� �ڱ� : " << nPlayerGold << endl;
                cout << i << "�� �� ������ ���۵˴ϴ�." << endl;

                Sleep(1000);
                system("cls");
            }
            break;

        case 2:
            nPlayerGold = NOMAL_LEVEL_GOLD;

            for (int i = 5; i > 0; i--)
            {
                cout << "���� ���̵��� ���ÿ����ϴ�." << endl;
                cout << "�ʱ� �ڱ� : " << nPlayerGold << endl;
                cout << i << "�� �� ������ ���۵˴ϴ�." << endl;

                Sleep(1000);
                system("cls");
            }
            break;

        case 3:
            nPlayerGold = HARD_LEVEL_GOLD;

            for (int i = 5; i > 0; i--)
            {
                cout << "����� ���̵��� ���ÿ����ϴ�." << endl;
                cout << "�ʱ� �ڱ� : " << nPlayerGold << endl;
                cout << i << "�� �� ������ ���۵˴ϴ�." << endl;

                Sleep(1000);
                system("cls");
            }
            break;

        default:
            cout << "�߸��� �Է��Դϴ�. ���̵��� �ٽ� �������ּ���." << endl;
            Sleep(2000);
            system("cls");

            f_set_level(); //����Լ�(���� ��ȣ��)
            break;
        }
    }

    //���� �ü����� �Լ�
    void f_RandomProductPrice()
    {
        /*
            nVariationNumber1   :  1�� ��ǰ �ü� ���� ������ 
            nVariationNumber2   :  2�� ��ǰ �ü� ���� ������
            nFluctuationNumber  :  ��ǰ �ü� ��� ���ð�
        */
        int nVariationNumber1 = 0, nVariationNumber2 = 0, nFluctuationNumber = 0;

        srand((unsigned)time(NULL));

        nVariationNumber1 = rand() % RANDOM_FIRST_PRODUCTPRICE;     //1�� ��ǰ ���� �ü� ����
        nVariationNumber2 = rand() % RANDOM_SECOND_PRODUCTPRICE;    //2�� ��ǰ ���� �ü� ����
        nFluctuationNumber = rand() % 2; //��ǰ �ü� ��� ����

        if (nFluctuationNumber == 1)
        {
            //��ǰ ������ ������ ��츦 �����ϱ� ���� ����

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

    //���� ���� ��� �Լ�
    void f_Print_CommerceData()
    {
        cout << "\n\n" << endl;
        cout << "\t����/��ǰ/��ǰ���� ���" << endl;
        cout << Country[nRandomCountry].strCountryName << " ������ " << endl;
        cout << Country[nRandomCountry].strFirstProductName << " : " << Country[nRandomCountry].strFirstProductDepiction << endl;
        cout << Country[nRandomCountry].strSecondProductName << " : " << Country[nRandomCountry].strSecondProductDepiction << endl;
        cout << Country[nRandomCountry].strFirstProductName << " : " << nProductPrice1 << endl;
        cout << Country[nRandomCountry].strSecondProductName << " : " << nProductPrice2 << endl;
    }

    //���� �Լ�
    void f_ActPurchase()
    {
        string strDepiction;
        int nProductNumber = 0, nDepictionLength = 0;

        strDepiction = "[�����Ѵ�]�� ���� �Ͽ����ϴ�. ���� �޴��� �̵��մϴ�.";
        nDepictionLength = int(strDepiction.length());

        cout << "\n\t";
        for (int i = 0; i < nDepictionLength; i++)
        {
            printf("%c", strDepiction[i]);
            Sleep(0);
        }

        Sleep(500);
        system("cls");

        //cout << strCountryName << " ������";
        cout << Country[nRandomCountry].strCountryName << " ������" << endl;

        //cout << "[1] : " << strFirstProductName << "\n" << "[2] : " << strSecondProductName << endl;
        cout << "[1] : " << Country[nRandomCountry].strFirstProductName << " : " << nProductPrice1 << endl;
        cout << "[2] : " << Country[nRandomCountry].strSecondProductName << " : " << nProductPrice2 << endl;

        cin >> nProductNumber; // == scanf("%d", &nProductNumber);

        switch (nProductNumber)
        {
        case 1: //1�� ��ǰ ����
            cout << Country[nRandomCountry].strFirstProductName << " ����" << endl;

            ProductNumber[nRandomCountry][0]++;
            //nPlayerGold -= nFirstProductPrice;
            nPlayerGold -= nProductPrice1;
            break;

        case 2:   //2�� ��ǰ ����
            cout << Country[nRandomCountry].strSecondProductName << " ����" << endl;

            ProductNumber[nRandomCountry][1]++;
            //nPlayerGold -= nSecondProductPrice;
            nPlayerGold -= nProductPrice2;
            break;

        default:
            cout << "�߸��� �Է��Դϴ�. �ٽ� �Է����ּ���." << endl;
            f_ActPurchase();
            break;
        }
    }

    //�Ǹ� �Լ�
    void f_ActSell()
    {
        string strDepiction;
        int nProductNumber = 0, nDepictionLength = 0;

        strDepiction = "[�Ǹ��Ѵ�]�� ���� �Ͽ����ϴ�. �Ǹ� �޴��� �̵��մϴ�.";
        nDepictionLength = int(strDepiction.length());

        cout << "\n\t";
        for (int i = 0; i < nDepictionLength; i++)
        {
            printf("%c", strDepiction[i]);
            Sleep(0);
        }

        Sleep(500);
        system("cls");

        //cout << strCountryName << " ������";
        cout << Country[nRandomCountry].strCountryName << " ������" << endl;

        //cout << "[1] : " << strFirstProductName << "\n" << "[2] : " << strSecondProductName << endl;
        cout << "[1] : " << Country[nRandomCountry].strFirstProductName << " : " << nProductPrice1 << endl;
        cout << "[2] : " << Country[nRandomCountry].strSecondProductName << " : " << nProductPrice2 << endl;

        cin >> nProductNumber; // == scanf("%d", &nProductNumber);

        switch (nProductNumber)
        {
        case 1: //1�� ��ǰ �Ǹ�
            cout << Country[nRandomCountry].strFirstProductName << " �Ǹ�" << endl;

            ProductNumber[nRandomCountry][0]--;
            //nPlayerGold -= nFirstProductPrice;
            nPlayerGold += nProductPrice1;
            break;

        case 2: //2�� ��ǰ �Ǹ�
            cout << Country[nRandomCountry].strSecondProductName << " �Ǹ�" << endl;

            ProductNumber[nRandomCountry][1]--;
            //nPlayerGold -= nSecondProductPrice;
            nPlayerGold += nProductPrice2;
            break;

        default:
            cout << "�߸��� �Է��Դϴ�. �ٽ� �Է����ּ���." << endl;
            f_ActPurchase();
            break;
        }
    }

    void f_ActCheck() // ���� ���� Ȯ���ϴ� �Լ�
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                ProductNumber[i][j]; // ���� ���� ������ �迭�� ���
            }
        }
        cout << "[1] : " << Country[nRandomCountry].strFirstProductName << "  " << ProductNumber[nRandomCountry][0] << endl;
        cout << "[2] : " << Country[nRandomCountry].strSecondProductName << "  " << ProductNumber[nRandomCountry][1] << endl;
    }

    //����, �������� ��� �Լ�
    void f_Print_CountryName_RegionDepiction()
    {
        Country[nRandomCountry].f_Print_CountryData();
    }

    void f_ActNextCountry() // ���� �ױ� ���� �Լ�
    {
        cout << "���� �ױ��� �̵��մϴ�!" << endl;
        sailing = 0;
    }

    void f_PrintNextCountry()  // ���� �ױ� ���� ���� ��� �Լ�
    {
        system("cls");
        cout << "\t�� �̻� �ŷ� �� �� �����ϴ�." << endl;
        cout << "\t���� �ױ��� �Ѿ�ϴ�." << endl;
    }

    //���� �Լ�
    void f_Commerce()
    {
        int nUserPick = 0;

        f_Print_CountryName_RegionDepiction(); //������, �������� ����Լ�


        f_Print_CommerceData(); //�������� ����Լ�()
        cout << nGameClearNumber << endl;
        cout << "���� ��� : "<< nPlayerGold << endl;
        cout << "������ �ൿ�� �����ϼ���!" << endl;
        cout << "[1]�� �����ϱ�, [2]�� �Ǹ��ϱ�, [3]�� �� ��ǰ Ȯ���ϱ�, [4]�� ���� �ױ�����" << endl;
        cin >> nUserPick;

        switch (nUserPick)
        {
        case 1: //���� �Լ�
            f_ActPurchase();
            nGameClearNumber++;
            break;

        case 2: //�Ǹ� �Լ�
            f_ActSell();
            nGameClearNumber++;
            break;

        case 3: // ���� ���� Ȯ�� �Լ�
            f_ActCheck();
            break;

        case 4: // ���� �ױ� ���� �Լ�
            nGameClearNumber = 0; //���� �ʱ�ȭ�� �ʼ��̹Ƿ� �Լ����� ���� ��ġ�Ѵ�.
            f_ActNextCountry();
            
            /*
            if (nGameClearNumber == 3)
            {
                cout << "���� �ױ��� ���ðڽ��ϱ�?" << endl;
                getchar();
                nGameClearNumber = 0;
                f_ActNextCountry();
            }
            else
            {
                cout << "���� �㰡�� ������ �ʾҽ��ϴ�." << endl;
                f_Commerce();
            }
            */

            break;

        case 5:
            /*
               ������ ����(���) �� ���� �Լ�()
            */
            break;

        default:

            cout << "�߸��� �Է��Դϴ�. �ٽ� �Է����ּ���." << endl;
            f_Commerce();
            break;
        }

        if (nPlayerGold < 1000)         //������ver.�� �̸� or �ʰ��� ���� ���� ���丮(�۵��˴ϴ�.)
        {
            cout << "�����Ͻ� ���(ȭ��)�� " << nPlayerGold << "G���Ϸ� �Ļ��Դϴ�" << endl;
            f_Print_EndingCredit();
            exit(0);
        }
        else if (nPlayerGold > 16000)
        {
            cout << "�����Ͻ� ���(ȭ��)�� 50000G�� �Ѿ� ������ ������ ������ϴ�! ������ �ϻ�޽��ϴ�!" << endl;
            f_Print_EndingCredit();
            exit(0);
        }
        else if (ProductNumber[0][0] >= 5) //0������ : �����ĳ�, 0�� ��ǰ : ����, �����ĳ��� 1����ǰ�� ������ 5���̻��̶�� 
        {
            cout << "������ ���� ������� ��ȣ����" << endl;
            Sleep(500);
            system("cls");
            f_Print_EndingCredit();
            exit(0);
        }
        else if (ProductNumber[1][1] >= 5)
        {
            cout << "�����ϰ� ��� �Ƹ�尡 ������ ���ؼ� ��������" << endl;
            Sleep(500);
            system("cls");
            f_Print_EndingCredit();
            exit(0);
        }
        else if (ProductNumber[2][1] >= 5)
        {
            cout << " ���������� ���� �浹�� ������ �ı��� ��������" << endl;
            Sleep(500);
            system("cls");
            f_Print_EndingCredit();
            exit(0);
        }
        else if (ProductNumber[4][1] >= 5)
        {
            cout << "���� ���䰡 �������� ���� ���� ���� ��ȣ����" << endl;
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

