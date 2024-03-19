//#define _LANGUAGE_KOREAN

//#define	_LANGUAGE_CHINESE
//#define	_LANGUAGE_CHINESE_FIELDLEVEL

//#define _LANGUAGE_JAPANESE
//#define _LANGUAGE_JAPANESE_FIELDLEVEL

//#define _LANGUAGE_JAPANESE_RING

//#define _LANGUAGE_TAIWAN

#define _LANGUAGE_ENGLISH			 //필리핀컴파일시 영문 주석 풀것
//#define _LANGUAGE_PHILIPIN
//#define _LANGUAGE_PHILIPIN_FIELDLEVEL
#define _LANGUAGE_ENGLISH_FIELDLEVEL

//#define _LANGUAGE_THAI
//#define _LANGUAGE_THAI_FIELDLEVEL		//아이언2와 아이스 막은거
//#define _LANGUAGE_THAI_DELETE_RING
//#define _LANGUAGE_THAILOW				//태국의 패킷 전송 횟수를 줄인다.(안함)
//#define _LANGUAGE_THAI_RING			//경험치 이벤트 발란타인 데이 이벤트를 차용해서 사용함(안함)

//#define _LANGUAGE_VEITNAM
//#define _LANGUAGE_VEITNAM_FIELDLEVEL

//#define _LANGUAGE_ARGENTINA
//#define _LANGUAGE_ARGENTINA_FIELDLEVEL

//#define	_LANGUAGE_BRAZIL
//#define	_LANGUAGE_BRAZIL_FIELDLEVEL
//#define	_LANGUAGE_BRAZIL_FIELDLEVEL_CLOSE
//#define	_FINDHACK_IN_USER

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 클라이언트가 로그인 하면서 겪는 과정을 파일로 출력한다.
//#define  _LOG_
//#define szLOG_FILENAME "_log_.txt"

#if defined (_LOG_)
#include "stdio.h"
#define MAKELOG(description)					\
{												\
	FILE *fpc_log = NULL;						\
	fpc_log = fopen(szLOG_FILENAME,"a+t");		\
	if( fpc_log != NULL )						\
	{											\
		fprintf(fpc_log,"\n %s",(description)); \
		fclose(fpc_log);						\
		fpc_log = NULL;							\
	}											\
}
#else
#define MAKELOG(desciption)
#endif
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// 서버 접속을 위해 nProtect 블럭(컴파일시 주석처리 할것)
//#define _nProtect_For_Debug

//창모드 지원(필리핀 일반유저/베트남/중국/영문)
#ifdef _LANGUAGE_VEITNAM
#define	_LANGUAGE_WINDOW	//베트남
#define	LOG_THE_PK
#else
#ifdef _LANGUAGE_ENGLISH
#define	_LANGUAGE_WINDOW	//영문, 필리핀
#else
#ifdef	_LANGUAGE_CHINESE	//중국
#define	_LANGUAGE_WINDOW
#else

#endif
#endif
#endif

#ifdef	_LANGUAGE_PHILIPIN
#define _DEATH_PANALTY			//(필리핀 항상/ 타국가는 데스페널티시만)
#endif

//#define _DELETE_FUCKIN_ITEM		// 임시 아이템 제거(OA121, OR121) 테스트중

//#define	_DELETE_RING			//(태국/일본)

//#define	_BEGINNER_EVENT			//(일본 초보퀘스트 추가아이템)

//중국의 홍콩 버전 ( 타이완 모드일 때만 적용 )
//#define _LANG_HONGKONG

#define	ATTACK_RATE		70	// 백분율이다. 100이하로(필리핀 25%) //  장별 - 몬스터 공격력 할인
#define	DEFENSE_RATE	80	// 상동

// 중국어 IME

#ifdef	_LANGUAGE_CHINESE
#define	_IME_ACTIVE
#endif

//smd 파일해킹 블럭
//#define _CHECK_MESH		//현재 임시 베트남만 적용중


//메모리 보호 기능 설정  // playsub.cpp에서 #define	PLAYSUB_CHECKRESULT		코드값 적용시 사용	
//#define	_SET_PROCTECT_MEM2

//새로운 친구 트레이드 적용
#define	_NEW_PARTRADE


//디버그 모드 겸용일 경우(GM 모드시)
#define	_WINMODE_DEBUG	// 서버 파일과 GM용 클라이언트 만들때는 주석을 풀어주고 만든다. 유저 배포용은 '//' 해준다.

//박재원 - XignCode(클라이언트)
//#define _XIGNCODE_CLIENT

//박재원 - XignCode(서버)
#define _XIGNCODE_SERVER

//테섭 컴파일
//#define	_TEST_SERVER

#ifdef	_LANGUAGE_CHINESE		//C7
#define	_PACKET_PASS_XOR	0xAE
#endif

#ifdef	_LANGUAGE_TAIWAN		//0x57
#define	_PACKET_PASS_XOR	0xCA
#endif

#ifdef	_LANGUAGE_ENGLISH
#define	_PACKET_PASS_XOR	0xED
#endif

#ifdef	_LANGUAGE_BRAZIL		
#define	_PACKET_PASS_XOR	0x6E
#endif

#ifdef	_LANGUAGE_ARGENTINA
#define	_PACKET_PASS_XOR	0x7A
#endif

#ifdef	_LANGUAGE_THAI
#define	_PACKET_PASS_XOR	0x6A
#endif

//64비트 경험치 적용
#define	_MODE_EXP64

/*
#define _XTRAP_GUARD_4_

// Client Only
//#define _XTRAP_GUARD_4_CLIENT
// Server Only
#define _XTRAP_GUARD_4_SERVER

#ifdef _LANGUAGE_ENGLISH
#ifndef _LANGUAGE_PHILIPIN	// 영문
//본서버용
//#define XTRAP_CONFIG_ARG "660970B4780BC97495046D9B49CFE86C26982C43E45EB71ED0EBD52B653028A4B5ED0F668266880479ED9823FEA453E5416381B615F50D6AFB14AE6F1CC4F2060F7D04245246E456FC27430F8D08395C0D626CD77F789837D3E3FE"
//#define XTRAP_CONFIG_ARG "660970B4780BC97495046D9B49CFE86C26982C43E45EB71ED0EBD52B653028A4B5ED0F668266880479ED9823FEA453E5416381B615F50D6AFB14AE6F1CC4F2060F7D04245246E455F424430F8309395FDA63F47655C2885B8F24CB52CD2077D5450754173004D064"
#define XTRAP_CONFIG_ARG "660970B4780BC97495046D9B49CFE862A0FBEEC020397AF4C5F5F7F0DCF06AC9DF6F6B8EFA87FEF21255E905DDB74729DF4187DB3ADFA693091D91520D705A2A0F7D04245246E403A925434DCE52760AC85982EDB4D41F3A3479AEF0760E08FB"      //ept Canada
#endif
#endif

#ifdef _LANGUAGE_PHILIPIN	// 필리핀
#define XTRAP_CONFIG_ARG "660970B41809C97495046D9B49CFE86CC78E3473F9DBFC541E6EE5A7748E0A9E63F1D09E98040AA8FF77F824C5369AEF86BEB3C7CE78CE28060E0B1DC513F1190F7D04245246E403A925434DCE52760AC85982EDB4D41F3A3479AEF0760E28FBA4"      //PTP (Canada)
#endif

#ifdef _LANGUAGE_CHINESE	// 중국
#define	XTRAP_CONFIG_ARG "660970B44809C974C2076D9B49CFE86CE7B6730B6592D6D043A7633F464B3148373E2AA62F794C9C3AC6A54F842114BDA9AA4686FDE775D7A7DF47E9E96170020F7D04245246E41FB1670C4E9549721940442A129864F074AF87C0C25CAD"	//XtrapD5
#endif

#ifdef _LANGUAGE_JAPANESE	// 일본
#define	XTRAP_CONFIG_ARG "660970B45809C97495046D9B49CFE862BF02397B1544E5315246D684F578221B05B5ECBCDCE6791C46115827B0E99B6C481F2634CCEBB187F8C54EA483AE0F7A0F7D04245246E456F724430C8E03395802AEEEF424136C654EBC3E302210AE6C57F2705D177457"
#endif

#ifdef _LANGUAGE_BRAZIL		// 브라질
#define	XTRAP_CONFIG_ARG "660970B4480BC97495046D9B44CFE86234DF5715CD081A535A5BEFCE20E570443BF3608A9C30F257FCF26965237FD82C5174ECA061610B220567DDF4D9A9CD7F0F7D04245246E403AA620352D4517343EAA58B79D1BC1BF5BD655EFEA86096230C112A024685"
#endif

#ifdef _LANGUAGE_ARGENTINA	// 아르헨티나
#define	XTRAP_CONFIG_ARG "660970B4960BC92295046D9B49CFE86C3E2F7A8EF7B49EFB8D695E95C86A4A7C62F31FF830D4DA63850008A5EDB7ABD7D0C2EAEE8DB8D6EFC459F98F4B6E15460F7D04245246E450F73B59089502245AF69A1ECBCCAEBDAF8453BD0A4A"
#endif

#ifdef _LANGUAGE_VEITNAM	// 베트남
#define	XTRAP_CONFIG_ARG "660970B4E809C97495046D9B49CFE86C57A09D4DAAE9D96CD9B72B69BDB38FA20194850D8EB8ABEFCF5F649B6378B51E3E044920C1EDB5F94CC1CF6598475E410F7D04245246E41FB1670C4E9540631B2783F86643B12A023E199E24FD11F0" //xtrap D5
#endif

#ifdef _LANGUAGE_THAI	// 태국 테스트용(영문꺼)
#define	XTRAP_CONFIG_ARG "660970B4780BC97495046D9B49CFE86C26982C43E45EB71ED0EBD52B653028A4B5ED0F668266880479ED9823FEA453E5416381B615F50D6AFB14AE6F1CC4F2060F7D04245246E455F424430F8309395FDA63F47655C2885B8F24CB52CD2077D50F4316417054D77F"
#endif
*/

#define	_SECURITY_UPDATE

#ifdef	_LANGUAGE_ENGLISH		//C7
#ifndef	_LANGUAGE_PHILIPIN
#endif
#define _QUEST_CHAOS_WING
#define _ON_PRIVATE_SHOP
#define _LANGUAGE_ENGLISH_NEXTUP    //흡수력 막은거
#define	_ON_MAP
#define	_ON_PET
#define	_CUSTOM_FONT
#endif

//중국
#ifdef	_LANGUAGE_CHINESE		//C7
#define _QUEST_CHAOS_WING
#define _ON_PRIVATE_SHOP
#define _LANGUAGE_ENGLISH_NEXTUP    //흡수력 막은거
#define	_ON_MAP
#define	_ON_PET
#endif

#ifdef	_LANGUAGE_THAI			//C7
#define _LANGUAGE_ENGLISH_NEXTUP    //흡수력 막은거
#define	_ON_MAP
#define _ON_PRIVATE_SHOP
#define	_ON_PET
#define _QUEST_CHAOS_WING
#define	_CUSTOM_FONT
#endif

#ifdef	_LANGUAGE_JAPANESE		//0x57
#define _LANGUAGE_ENGLISH_NEXTUP    //흡수력 막은거
#define _QUEST_CHAOS_WING
#define	_ON_MAP
#define _ON_PRIVATE_SHOP
#define	_ON_PET
#endif

#ifdef	_LANGUAGE_KOREAN		//0x57
#define _LANGUAGE_ENGLISH_NEXTUP    //흡수력 막은거
#define _QUEST_CHAOS_WING
#define	_ON_MAP
#define _ON_PRIVATE_SHOP
#define	_ON_PET
#endif

#ifdef	_LANGUAGE_BRAZIL
#define _LANGUAGE_ENGLISH_NEXTUP    //흡수력 막은거
//#define _QUEST_CHAOS_WING
#define	_ON_MAP
#define _ON_PRIVATE_SHOP
#define	_ON_PET
#endif

#ifdef	_LANGUAGE_ARGENTINA
#define _LANGUAGE_ENGLISH_NEXTUP    //흡수력 막은거
//#define _QUEST_CHAOS_WING
#define	_ON_MAP
#define _ON_PRIVATE_SHOP
#define	_ON_PET
#endif

#ifdef _LANGUAGE_VEITNAM
#define _LANGUAGE_ENGLISH_NEXTUP    //흡수력 막은거
#define _QUEST_CHAOS_WING
#define _ON_PRIVATE_SHOP
#define	_ON_MAP
#define	_ON_PET
#endif
