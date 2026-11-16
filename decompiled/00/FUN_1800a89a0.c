// FUN_1800a89a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800a89a0 */

char * FUN_1800a89a0(undefined1 *param_1,int param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  char *pcVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  
  param_3 = param_2 + param_3;
  if ((param_2 <= param_3) && (param_3 < 0x10)) {
    lVar5 = (longlong)param_3;
    FUN_18063ab10(param_1 + param_2,0x30,lVar5 - param_2);
    *(undefined2 *)(param_1 + lVar5) = 0x302e;
    return param_1 + lVar5 + 2;
  }
  uVar1 = param_3 - 1;
  if (uVar1 < 0xf) {
    puVar8 = param_1 + param_3;
    FUN_18063aed0(puVar8 + 1,puVar8,(longlong)param_2 - (longlong)param_3);
    *puVar8 = 0x2e;
    pcVar4 = param_1 + (longlong)param_2 + 1;
  }
  else {
    puVar8 = param_1 + 1;
    if (param_3 + 3U < 4) {
      lVar5 = (longlong)-param_3;
      FUN_18063aed0(param_1 + lVar5 + 2,param_1,(longlong)param_2);
      *param_1 = 0x30;
      *puVar8 = 0x2e;
      FUN_18063ab10(param_1 + 2,0x30,lVar5);
      pcVar4 = param_1 + (longlong)param_2 + 2 + lVar5;
    }
    else {
      if (param_2 != 1) {
        FUN_18063aed0(param_1 + 2,puVar8,(longlong)param_2 + -1);
        *puVar8 = 0x2e;
        puVar8 = param_1 + (longlong)param_2 + 1;
      }
      *puVar8 = 0x65;
      uVar3 = 0x2d;
      uVar6 = 1 - param_3;
      if (-1 < (int)uVar1) {
        uVar3 = 0x2b;
        uVar6 = uVar1;
      }
      uVar7 = (ulonglong)uVar6;
      puVar8[1] = uVar3;
      if (uVar6 < 10) {
        puVar8[2] = 0x30;
        pcVar4 = puVar8 + 3;
      }
      else if (uVar6 < 100) {
        pcVar4 = puVar8 + 3;
        cVar2 = (char)(uVar7 / 10);
        puVar8[2] = cVar2 + '0';
        uVar7 = (ulonglong)(byte)((char)uVar6 + cVar2 * -10);
      }
      else {
        pcVar4 = puVar8 + 4;
        puVar8[2] = (char)(uVar7 / 100) + '0';
        uVar6 = uVar6 + (int)(uVar7 / 100) * -100;
        uVar7 = (ulonglong)uVar6 / 10;
        *pcVar4 = (char)uVar6 + (char)uVar7 * -10 + '0';
        uVar7 = uVar7 & 0xff;
      }
      pcVar4 = pcVar4 + 1;
      puVar8[3] = (char)uVar7 + '0';
    }
  }
  return pcVar4;
}



