// FUN_1805fbc00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fbc00 */

void FUN_1805fbc00(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  _Lockit local_res8 [32];
  
  std::_Lockit::_Lockit(local_res8,2);
  *(undefined8 *)(param_1 + 8) = 1;
  uVar2 = 1;
  do {
    lVar1 = *(longlong *)(uVar2 * 8 + 0x180bb16e0);
    if ((lVar1 == 0) || (lVar1 == param_1)) break;
    uVar2 = uVar2 + 1;
    *(ulonglong *)(param_1 + 8) = uVar2;
  } while (uVar2 < 8);
  (&DAT_180bb1730)[uVar2] = (&DAT_180bb1730)[uVar2] + '\x01';
  *(longlong *)(uVar2 * 8 + 0x180bb16e0) = param_1;
  std::_Lockit::~_Lockit(local_res8);
  return;
}



