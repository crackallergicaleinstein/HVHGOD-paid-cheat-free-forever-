// FUN_1804ab860 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ab860 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804ab860(undefined8 param_1,undefined8 param_2,float *param_3,float param_4,
                  undefined1 param_5,undefined8 param_6,undefined1 param_7)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  float local_68;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined1 local_2f;
  float local_28;
  float local_24;
  ulonglong local_20;
  
  lVar1 = DAT_180bb8ae8;
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_88;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  plVar4 = *(longlong **)(lVar1 + 0x14d0);
  iVar3 = FUN_1804b0a90("##color",0,
                        *(undefined4 *)(plVar4[0x22] + -4 + (longlong)(int)plVar4[0x21] * 4));
  if (*(int *)(*plVar4 + 0x1534) == iVar3) {
    FUN_1804cf810(iVar3,0xb,"##color");
  }
  local_28 = param_4 + *param_3;
  local_24 = param_4 + param_3[1];
  local_68 = (float)CONCAT31(local_68._1_3_,param_5);
  FUN_1804aba00(iVar3,param_2,param_3,&local_28);
  local_58 = DAT_180b0a41c * 7.0;
  local_50 = DAT_180b0a41c * 10.0 + local_28;
  local_4c = param_3[1] - DAT_180b0a41c * 40.0;
  local_68 = DAT_180b0a41c * 8.0;
  local_54 = local_58;
  cVar2 = FUN_1804a8290(iVar3,&local_50,DAT_180b0a41c * 182.0,&local_58);
  if (cVar2 != '\0') {
    local_48 = 0;
    local_38 = 0;
    local_2f = 0;
    local_40 = 0;
    local_30 = param_7;
    FUN_1804a3eb0(iVar3,param_2,&local_48);
    FUN_1804aeac0();
  }
}



