//======================================================================
//											CGimmickLayoutBase.h
//	ギミックベースレイアウト
//
//======================================================================
//	author :	AT12A 18 田村敏基
//======================================================================
//	開発履歴
//	2020/12/01	
//
//======================================================================

//====== インクルード部 ======
#include "CObject.h"
#include "CRigidbody2D.h"
#include "CCollision2D.h"
#include "CGimmickLayoutBase.h"

//===== マクロ定義 =====


//===== プロトタイプ宣言 =====


//===== グローバル変数 =====


//===================================
//
//	スタート関数
//
//===================================
void CGimmickLayoutBase::Start()
{

}

//===================================
//
//	ギミック更新関数
//
//===================================
void CGimmickLayoutBase::GimmickUpdate()
{

}

//===================================
//
//	帯電侵入関数
//
//===================================
void CGimmickLayoutBase::ChargePlayerEnter(std::weak_ptr<CCollision2D> collsion2d)
{

}

//===================================
//
//	帯電滞在関数
//
//===================================
void CGimmickLayoutBase::ChargePlayerStay(std::weak_ptr<CCollision2D> collsion2d)
{

}

//===================================
//
//	帯電撤退関数
//
//===================================
void CGimmickLayoutBase::ChargePlayerExit(std::weak_ptr<CCollision2D> collsion2d)
{

}

//===================================
//
//	電気弾稼働関数
//
//===================================
void CGimmickLayoutBase::EnergyOn()
{

}

//===================================
//
//	電気弾休止関数
//
//===================================
void CGimmickLayoutBase::EnergyOff()
{

}