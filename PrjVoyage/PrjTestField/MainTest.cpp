#include "ClassTest.h"


int main()
{
    ClassCountryInfo GameData;
    ClassPlayVoyage GamePlay;
    ClassUIVoyage GameUI;

 

    ClassCountryInfo C1
    (
        "에스파냐",
        "유럽의 이베리아 반도와 북아프리카에 위치한 국가로, 무적함대로 대표되는 강력한 해양 국가이자 대영제국 이전의 해가 지지 않는 나라로까지 여겨졌던 세계적인 열강",
        "쉐리",
        "샤프란",
        "에스파냐 남동부의 헤레스도라 지방에서 만들어지는 감미포도주이다.",
        "샤프란의 암술을 말린 굉장히 고가인 향신료이다.",
        1000, 1000
    );
    GamePlay.f_AddCountry(C1);

    ClassCountryInfo C2
    (
        "포르투갈",
        "인도로 가는 항로를 찾기 시작하면서 유럽인들의 대항해시대를 시작한 국가로, 남아메리카, 아시아, 아프리카, 오세아니아를 아우르는 제국을 건설한 강대국이었다.",
        "햄",
        "아몬드",
        "소금에 절인 돼지고기를 훈제한 것이다.",
        "장미목 장미과 벚나무속에 속한 중동 원산의 식물, 쌍떡잎 식물이며 과육 껍질에는 주름이 잡혀 있다.",
        2000, 2000
    );
    GamePlay.f_AddCountry(C2);

    ClassCountryInfo C3
    (
        "이탈리아",
        "남유럽과 지중해의 반도에 위치한 공화국이다, 수도는 로마로 로마 제국의 중심지였던 국가라 고대 유럽 문화의 핵심이었고 라틴 문자의 발상지다.",
        "유리세공",
        "후추",
        "유리의 정교한 세공, 향수병이나 장식품 등에 사용된다.",
        "후추나무의 열매이다. 이슬람 중계상을 통하여 들어온 고가의 향신료이다.",
        3000, 3000
    );
    GamePlay.f_AddCountry(C3);

    ClassCountryInfo C4
    (
        "대영제국",
        "15세기 대항해시대 이후 1931년 영국 연방이 성립할 때까지 영국에 복속되거나 영국이 건설한 세계 각지의 식민지와 통치 지역을 거느린 제국이다.",
        "위스키",
        "프란넬",
        "보리종류를 원료로 하는 증류주이며 브리튼 섬 근해 지방에서 만들어 진다.",
        "브리튼 섬이 발상지로 보풀을 일으키는 모직물. 보온성이 굉장히 높다.",
        4000, 4000
    );
    GamePlay.f_AddCountry(C4);

    ClassCountryInfo C5
    (
        "네덜란드",
        "주식회사인 연합 동인도 회사를 설립하여 세계 제일의 무역국으로, 네덜란드 동인도 회사는 주주들의 투자를 받아서 설립된 주식회사였다.",
        "진",
        "캐모마일",
        "곡물의 증류주에 주니퍼 베리 등으로 향미를 가한 술.",
        "옛날부터 사용되는 흰 꽃의 약초. 식용, 외상용으로 쓴다.",
        5000, 5000
    );
    GamePlay.f_AddCountry(C5);

    /*
       - 게임 개요 출력 함수 호출
       - 난이도 선택 함수 호출
    */
    
    //GameUI.f_summary_print();

    GameUI.f_Print_VoyageDepiction();
    GamePlay.f_set_level();     //서장일ver. nPlayerGold 받아오기 위함

    do  //조건까지 랜덤으로 국가가 변경됨
    {
        GamePlay.f_ArrayProdcutInit(); //상품 선택을 위한 이중배열 초기화

        //srand((unsigned)time(NULL)); //랜덤 seed 변경을 위한 초기화

        //GamePlay.nRandomCountry = rand() % MAXCOUNTRY;  //랜덤으로 국가 변경

        GamePlay.f_EnterPort(); //입항 유/무 선택 함수
        GamePlay.f_RandomProductPrice(); //랜덤으로 시세 변경

       while (sailing)
       {
           //GamePlay.f_RandomProductPrice();
           GamePlay.f_Commerce(); //교역 함수 호출
           nGameClearNumber++;
           
           
           if (nGameClearNumber == 10)  // 다음 항구로 넘어가는 조건
           {
               GamePlay.f_PrintNextCountry();  // 다음 함수로 이동한다는 구문 출력
               Sleep(3000);
               GamePlay.f_ActNextCountry(); //다음 항구 함수호출
               cout << "다음 항구 함수 호출";
           }
           
       }
       sailing = 1;


       /*
       if (nGameClearNumber == 5)  // 다음 항구로 넘어가는 조건
       {
          nGameClearNumber = 0;
          //GamePlay.f_ActNextCountry(); //다음 항구 함수호출
          cout << "다음 항구 함수 호출";
       }*/
    } while (1);
    

    return 0;
}