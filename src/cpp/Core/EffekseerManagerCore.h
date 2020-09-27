#pragma once

#include "EffekseerBackendCore.h"

class EffekseerEffectCore;

namespace EffekseerRenderer
{
class Renderer;
}

class EffekseerManagerCore
{
private:
	::Effekseer::Manager* manager_ = nullptr;
	::EffekseerRenderer::Renderer* renderer_ = nullptr;
	float restDeltaTime_ = 0.0f;

public:
	EffekseerManagerCore() = default;
	~EffekseerManagerCore();

	bool Initialize(int32_t spriteMaxCount);
	bool Initialize(int32_t spriteMaxCount, bool gl2);

	void Update(float deltaFrames);

	void BeginUpdate();

	void EndUpdate();

	void UpdateHandleToMoveToFrame(int handle, float v);
	

	int Play(EffekseerEffectCore* effect);
	
	void Stop(int handle);

	void SetPaused(int handle,bool v);

	void SetShown(int handle,bool v);

	void SetEffectPosition(int handle, float x, float y, float z);

	void SetEffectTransformMatrix(int handle,float v0,float v1,float v2,float v3,float v4,float v5,float v6,float v7,float v8,float v9,float v10,float v11);

	void DrawBack();

	void DrawFront();

	void SetProjectionMatrix(float v0,float v1,float v2,float v3,float v4,float v5,float v6,float v7,float v8,float v9,float v10,float v11,float v12,float v13,float v14,float v15);
	
	void SetCameraMatrix(float v0,float v1,float v2,float v3,float v4,float v5,float v6,float v7,float v8,float v9,float v10,float v11,float v12,float v13,float v14,float v15);
	
	bool Exists(int handle);

	void SetViewProjectionMatrixWithSimpleWindow(int32_t windowWidth, int32_t windowHeight);

	void SetDynamicInput(int handle,int32_t index,float value);

	float GetDynamicInput(int handle,int32_t index);

	void LaunchWorkerThreads(int32_t n);
};
