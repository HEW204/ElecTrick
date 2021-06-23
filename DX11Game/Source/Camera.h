#pragma once
#include "main.h"
#include "transform.h"

#define	VIEW_NEAR_Z			(100.0f)					// �r���[���ʂ�NearZ�l
#define	VIEW_FAR_Z			(2000.0f)				// �r���[���ʂ�FarZ�l

class CCamera
{
private:
	XMFLOAT3 m_vPos;				// ���_
	XMFLOAT3 m_vTarget;				// �����_
	XMFLOAT3 m_vUp;					// ����x�N�g��

	XMFLOAT3 m_vDestPos;			// ���_�̖ړI�ʒu
	XMFLOAT3 m_vDestTarget;			// �����_�̖ړI�ʒu
	XMFLOAT3 m_vVelocity;			// �ړ���

	float m_fAspectRatio;			// �c����
	float m_fFovY;					// ����p(Degree)
	float m_fNearZ;					// �O���N���b�v����
	float m_fFarZ;					// ����N���b�v����

	XMFLOAT4X4 m_mtxWorld;			// ���[���h �}�g���b�N�X
	XMFLOAT4X4 m_mtxView;			// �r���[ �}�g���b�N�X
	XMFLOAT4X4 m_mtxProj;			// �v���W�F�N�V���� �}�g���b�N�X

	XMFLOAT3 m_vAngle;				// �J�����̊p�x
	XMFLOAT3 m_vDestAngle;			// �J�����̖ړI�̌���
	XMFLOAT3 m_vDestTargetAngle;	// �����_�̖ړI�̌���
	float m_fLengthInterval;		// �J�����̎��_�ƒ����_�̋���
	float m_fInitLengthInterval;	// �����J�����̎��_�ƒ����_�̋���
	float m_fLengthOffset;			// �J�����̎��_�ƒ����_�̋���

	XMFLOAT3 m_vRelPos;				// ���f�����΃J�����ʒu
	XMFLOAT3 m_vRelTarget;			// ���f�����Β����_�ʒu

	XMFLOAT3 m_vOffSet;				// �J�����̃I�t�Z�b�g

	Vector3 m_vForward;

	//XMFLOAT3* m_pTargetPos;

	std::weak_ptr<CTransform> m_targetTrans;

	static CCamera* m_mainCamera;
public:
	CCamera();

	void Init();
	void Update();

	void SetPos(XMFLOAT3& vPos) { m_vPos = vPos; }
	XMFLOAT3& GetPos() { return m_vPos; }
	void SetPos(float x, float y, float z) { m_vPos.x = x, m_vPos.y = y, m_vPos.z = z; }
	void SetTarget(XMFLOAT3& vTarget) { m_vTarget = vTarget; }
	void SetTarget(float x, float y, float z) { m_vTarget.x = x, m_vTarget.y = y, m_vTarget.z = z; }
	void SetUpVector(XMFLOAT3& vUp) { m_vUp = vUp; }
	void SetUpVector(float x, float y, float z) { m_vUp.x = x, m_vUp.y = y, m_vUp.z = z; }
	void SetWorldMatrix(XMFLOAT4X4& mtxWorld);
	XMFLOAT4X4& GetWorldMatrix() { return m_mtxWorld; }
	XMFLOAT4X4& CalcWorldMatrix();
	void SetFovY(float fFovY) { m_fFovY = fFovY; }
	void SetAspectRatio(float fAspect) { m_fAspectRatio = fAspect; }
	void SetRangeZ(float fNearZ, float fFarZ) { m_fNearZ = fNearZ, m_fFarZ = fFarZ; }
	void UpdateMatrix();
	XMFLOAT4X4& GetViewMatrix() { return m_mtxView; }
	XMFLOAT4X4& GetProjMatrix() { return m_mtxProj; }
	XMFLOAT3& GetAngle() { return m_vAngle; }

	static void SetMainCamera(CCamera* pCamera) { m_mainCamera = pCamera; }
	static CCamera* GetMainCamera() { return m_mainCamera; }

	//void SetCameraTarget(XMFLOAT3* pTargetPos) { m_pTargetPos = pTargetPos; }
	void SetCameraTarget(std::weak_ptr<CTransform> trans) { m_targetTrans = trans; }
	void UpdateCameraPos(int nNum) { for (int i = 0; i < nNum; i++) Update(); }

	Vector3 GetForward() { return m_vForward; }

	void SetOffSet(XMFLOAT3 offSet) { m_vOffSet = offSet; }
	void SetLengthOffset(float fLength) { m_fLengthOffset = fLength; }
};