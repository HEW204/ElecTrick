//==================================================================
//												Object.h
//	�S�Ă̌��ƂȂ�I�u�W�F�N�g�e���v���[�g
//
//==================================================================
//	author :	AT12A 05 �F�����W�V
//==================================================================
//	�J������
//
//	2020/12/22	�I�u�W�F�N�g�e���v���[�g�N���X�쐬
//
//===================================================================

#pragma once

//====== �C���N���[�h�� ======
#include "IObject.h"


//===== �}�N����` =====


//===== �N���X��` =====
namespace ECS
{
	template <class T>
	class Object : public IObject
	{
	public:
		// ���g��weak�|�C���^
		std::weak_ptr<T> m_self;

	public:
		// �R���X�g���N�^
		Object(){}
		// �f�X�g���N�^
		virtual ~Object(){}
	};
}