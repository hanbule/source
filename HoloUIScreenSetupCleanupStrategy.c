

int __fastcall HoloUIScreenSetupCleanupStrategy::HoloUIScreenSetupCleanupStrategy(int result, int a2)
{
  *(_DWORD *)result = &off_26E4858;
  *(_DWORD *)(result + 4) = a2;
  *(_DWORD *)(result + 8) = 1065353216;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 36) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_QWORD *)(result + 28) = 1065353216LL;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 48) = 1065353216;
  *(_DWORD *)(result + 60) = 0;
  *(_DWORD *)(result + 64) = 0;
  *(_DWORD *)(result + 52) = 0;
  *(_DWORD *)(result + 56) = 0;
  *(_DWORD *)(result + 68) = 1065353216;
  return result;
}


int __fastcall HoloUIScreenSetupCleanupStrategy::_generateMatrixPatch(HoloUIScreenSetupCleanupStrategy *this, int a2)
{
  HoloUIScreenSetupCleanupStrategy *v2; // r4@1
  int v3; // r0@1

  v2 = this;
  v3 = ClientInstance::getHoloInput(*(ClientInstance **)(a2 + 4));
  return HolographicPlatform::getTransform((int)v2, v3, 5, 15, 0);
}


int __fastcall HoloUIScreenSetupCleanupStrategy::setupScreen(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  mce::WorldConstantsHolographic *v4; // r2@1
  int v6; // [sp+0h] [bp-50h]@1

  v2 = a1;
  v3 = a2;
  (*(void (__fastcall **)(int *, int))(*(_DWORD *)a1 + 20))(&v6, a1);
  mce::WorldConstantsHolographic::getMatrixPatch(*(_DWORD *)(v3 + 32) + 36, v2 + 8);
  mce::WorldConstantsHolographic::setMatrixPatch(*(_DWORD *)(v3 + 32) + 36, (int)&v6);
  return ScreenSetupCleanupHelper::setupForVRDrawing(
           *(ScreenSetupCleanupHelper **)(v2 + 4),
           (ClientInstance *)(*(_DWORD *)(v3 + 32) + 36),
           v4);
}


int __fastcall HoloUIScreenSetupCleanupStrategy::cleanupScreen(int a1, int a2)
{
  int v2; // r4@1
  mce::WorldConstantsHolographic *v3; // r1@1

  v2 = a2;
  mce::WorldConstantsHolographic::setMatrixPatch(*(_DWORD *)(a2 + 32) + 36, a1 + 8);
  return j_j_j__ZN24ScreenSetupCleanupHelper20cleanupFromVRDrawingERN3mce25WorldConstantsHolographicE_0(
           (ScreenSetupCleanupHelper *)(*(_DWORD *)(v2 + 32) + 36),
           v3);
}


signed int __fastcall HoloUIScreenSetupCleanupStrategy::getEyeRenderingMode(HoloUIScreenSetupCleanupStrategy *this)
{
  HoloUIScreenSetupCleanupStrategy *v1; // r4@1
  Options *v2; // r0@2
  signed int result; // r0@3

  v1 = this;
  if ( ClientInstance::getForceMonoscopic(*((ClientInstance **)this + 1))
    || (v2 = (Options *)ClientInstance::getOptions(*((ClientInstance **)v1 + 1)), !Options::getStereoRendering(v2)) )
  {
    result = 1;
  }
  else
    result = 6;
  return result;
}
