// FUN_18059cda0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059cda0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18059cda0(longlong *param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_138 [32];
  int local_118 [4];
  undefined1 local_108 [208];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_138;
  local_118[0] = 0;
  puVar4 = (undefined8 *)(*(undefined8 **)(*param_1 + 0x3e0))[0x21a];
  lVar2 = FUN_180573a00(**(undefined8 **)(*param_1 + 0x3e0),"pshinter");
  if (((lVar2 == 0) || (puVar4 == (undefined8 *)0x0)) ||
     (pcVar1 = (code *)*puVar4, pcVar1 == (code *)0x0)) {
    puVar4 = (undefined8 *)0x0;
    uVar5 = *(undefined8 *)(*param_1 + 0x98);
    lVar2 = *(longlong *)(*param_1 + 0x3e0);
  }
  else {
    puVar3 = (undefined8 *)(*pcVar1)(lVar2);
    puVar4 = (undefined8 *)0x0;
    uVar5 = *(undefined8 *)(*param_1 + 0x98);
    lVar2 = *(longlong *)(*param_1 + 0x3e0);
    if ((puVar3 != (undefined8 *)0x0) &&
       (puVar4 = (undefined8 *)FUN_18057aad0(uVar5,0x808,local_118), local_118[0] == 0)) {
      FUN_1805a1070(lVar2 + 0x5e0,local_108);
      local_118[0] = (*(code *)*puVar3)(uVar5,local_108,puVar4);
      if (local_118[0] == 0) {
        uVar6 = *(uint *)(lVar2 + 0x8a8);
        do {
          if (uVar6 == 0) {
            *(undefined8 **)param_1[7] = puVar4;
            *(undefined4 *)(param_1 + 8) = 0xffffffff;
            break;
          }
          local_118[0] = 0;
          uVar6 = uVar6 - 1;
          FUN_1805a1070(*(undefined8 *)(lVar2 + 0x8b0 + (ulonglong)uVar6 * 8),local_108);
          local_118[0] = (*(code *)*puVar3)(uVar5,local_108,puVar4 + (ulonglong)uVar6 + 1);
        } while (local_118[0] == 0);
      }
    }
  }
  if (local_118[0] != 0) {
    if (puVar4 != (undefined8 *)0x0) {
      uVar6 = *(uint *)(lVar2 + 0x8a8);
      uVar7 = (ulonglong)uVar6;
      while (uVar6 != 0) {
        uVar6 = (int)uVar7 - 1;
        uVar7 = (ulonglong)uVar6;
        FUN_18057abd0(uVar5,puVar4[uVar7 + 1]);
        puVar4[uVar7 + 1] = 0;
      }
      FUN_18057abd0(uVar5,*puVar4);
      *puVar4 = 0;
    }
    FUN_18057abd0(uVar5,puVar4);
  }
}



