//======================================================================
//											CResourceEnergy.h
//	エネルギーリソース
//
//======================================================================
//	author :	AT12A 15 榊原龍我
//======================================================================
//	開発履歴
//	2020/11/20	作り直し
//		 11/30	プレイヤーのリソースを10単位で使われない限り減らないプログラム追加
//				floatをintに変換してるため、実行する際に警告が大量に出るためリーダーと要相談
//
//======================================================================
#pragma once


//====== インクルード部 ======
#include "CObject.h"
#include "debugproc.h"

//-- マクロ定義 --//
enum LEVEL
{
	ZERO = 0,
	ONE,
	TWO,
	THREE,

	MAX_LEVEL,
};

//===== クラス定義 =====
class CResourceEnergy : public CComponent
{
private:
	// --- 変数宣言 ---
	float m_fResource;					//エネルギー量
	const float m_fMaxResource = 30;	//最大エネルギー量
	const float m_fMinResource = 0;		//最小エネルギー量
	bool  m_bFlag;						//帯電フラグ
	int	  m_nEnergyStop;				//エネルギーのストッパー
	LEVEL m_enLevel;					//エネルギーレベル

public:
	bool  m_bEnergyUse;					//エネルギーを使ってるかどうか //ギミックで使用するためパブリックに

	// 作成時に呼ばれます
	void Start() override;

	// 毎フレーム呼ばれます
	void Update() override;

	// 毎フレームの更新後に呼ばれます
	void LateUpdate() override;

	// 終了関数 
	void End() override;

	// --- 関数宣言 ---
	
	//--------------------------------------------------
	//	エネルギー量を取得
	//--------------------------------------------------
	float GetResource(void);

	//--------------------------------------------------
	//	エネルギーレベルを取得
	//--------------------------------------------------
	int GetLevel(void);

	//--------------------------------------------------
	//	帯電状態を取得
	//--------------------------------------------------
	bool GetFlag(void);

	//--------------------------------------------------
	//	エネルギーレベルを判別
	//--------------------------------------------------
	void DecideLevel(void);

	//--------------------------------------------------
	//  エネルギーのセット	
	//--------------------------------------------------
	void SetEnergy(float famount = 0.0f);

	//--------------------------------------------------
	//  エネルギーの加算	
	//--------------------------------------------------
	void AddEnergy(float fadd = 0.0f);

	//--------------------------------------------------
	//	エネルギーの減算
	//--------------------------------------------------
	void SubEnergy(float fsub = 0.0f);

	//--------------------------------------------------
	//	帯電判別
	//	判別値は後
	//--------------------------------------------------
	void DecideCharged(void);

	//--------------------------------------------------------------------//
	//	エネルギーの使用判定
	//--------------------------------------------------------------------//
	void CheckUse(void);

	//--------------------------------------------------------------------//
	//	エネルギーのストップ判定
	//--------------------------------------------------------------------//
	void CheckStop(void);

	//--------------------------------------------------------------------//
	//	最大エネルギー
	//--------------------------------------------------------------------//
	float GetMaxResource() { return m_fMaxResource; }

	//--------------------------------------------------------------------//
	//	エネルギーの初期化
	//--------------------------------------------------------------------//
	void ClaerResource() { m_fResource = 0; m_nEnergyStop = 0; }

	void ShotUsedResource(float num) {
		m_fResource -= num;
		m_nEnergyStop = m_fResource / 10;
		m_nEnergyStop *= 10;
	}

};



