//======================================================================
//												CEditorModeObj.cpp
//	�^�C�g���̃G�f�B�^�[���[�h�p�I�u�W�F�N�g
//
//======================================================================
//	author :	AT12A 15 �匴����
//======================================================================
//	�J������
//	2021/01/19	�쐬
//
//======================================================================


//===== �C���N���[�h�� =====
#include "CEditorModeObj.h"


//===== �}�N����` =====
#define DEFAULT_MODEL			"data/model/box.fbx"
#define TEXTURE_PATH			"data/texture/Title_Menu/hatena.png"

//===== �v���g�^�C�v�錾 =====


//===== �O���[�o���ϐ� =====


//===================================
//
//	�R���X�g���N�^
//
//===================================
CEditorModeObj::CEditorModeObj()
{
	// �g�����X�t�H�[��
	m_pTrans;

	// �^�O�̐ݒ�
	m_name = m_tag = "CEditorModeObj";

	//--- �R���|�[�l���g�̒ǉ�

	//�e�N�X�`���̐ݒ�
	m_renderer.lock()->SetTexture(TEXTURE_PATH);

}

//===================================
//
//	�f�X�g���N�^
//
//===================================
CEditorModeObj::~CEditorModeObj()
{

}