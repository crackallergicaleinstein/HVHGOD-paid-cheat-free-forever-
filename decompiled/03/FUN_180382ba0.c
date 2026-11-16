// FUN_180382ba0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180382ba0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180382ba0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auStack_188 [48];
  char *local_158;
  undefined8 uStack_150;
  undefined1 *local_148;
  ulonglong uStack_140;
  uint local_138 [4];
  undefined1 local_128 [256];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_188;
  plVar3 = &DAT_180ba3030;
  do {
    if ((longlong *)*plVar3 == param_2) {
    }
    plVar3 = plVar3 + 2;
  } while (plVar3 != &DAT_180ba3130);
  FUN_18063ab10(local_128,0,0x100);
  local_138[0] = 0x100;
  uVar7 = 0;
  iVar2 = (**(code **)(*param_2 + 0x20))(param_2,&DAT_180807008,local_138,local_128);
  if ((-1 < iVar2) && (uVar4 = (ulonglong)local_138[0], local_138[0] < 0x101)) {
    uVar6 = (ulonglong)local_138[0];
    if ((local_138[0] == 0) ||
       (puVar5 = (undefined1 *)thunk_FUN_1805f7e70(local_128,local_128 + uVar4,0),
       puVar5 == local_128 + uVar4)) {
      uStack_140 = 0xffffffffffffffff;
    }
    else {
      uStack_140 = (longlong)puVar5 - (longlong)local_128;
    }
    local_148 = local_128;
    if (uVar6 < uStack_140) {
      uStack_140 = uVar6;
    }
    local_158 = "mboitfinal";
    uStack_150 = 10;
    cVar1 = FUN_180382a50(&local_148,&local_158);
    if (cVar1 == '\0') {
      local_158 = "overlay_smoke";
      uStack_150 = 0xd;
      cVar1 = FUN_180382a50(&local_148,&local_158);
      uVar7 = (uint)(cVar1 != '\0');
    }
    else {
      uVar7 = 2;
    }
  }
  uVar4 = (ulonglong)((uint)DAT_180ba3130 & 0xf);
  DAT_180ba3130 = DAT_180ba3130 + 1;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  plVar3 = (longlong *)(&DAT_180ba3030)[uVar4 * 2];
  (&DAT_180ba3030)[uVar4 * 2] = param_2;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  (&DAT_180ba3038)[uVar4 * 4] = uVar7;
}



