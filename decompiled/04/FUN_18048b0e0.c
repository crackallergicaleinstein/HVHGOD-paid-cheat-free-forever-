// FUN_18048b0e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18048b0e0 */

ulonglong FUN_18048b0e0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  int iVar2;
  ulonglong in_RAX;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 local_38 [32];
  
  lVar4 = DAT_180bb8ae8;
  if (DAT_180bbecdb != '\0') {
    return in_RAX & 0xffffffffffffff00;
  }
  local_60 = 0;
  local_5c = 0;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  plVar1 = *(longlong **)(lVar4 + 0x14d0);
  local_58 = 0;
  local_68 = 0;
  local_64 = 0;
  puVar3 = (undefined8 *)FUN_180487810(local_38,param_1,param_2,param_3,0,0,0,&local_68,0);
  local_58 = *puVar3;
  uStack_50 = puVar3[1];
  uStack_48 = puVar3[2];
  uStack_40 = puVar3[3];
  iVar2 = FUN_1804b0a90(param_1,0,
                        *(undefined4 *)(plVar1[0x22] + -4 + (longlong)(int)plVar1[0x21] * 4));
  if (*(int *)(*plVar1 + 0x1534) == iVar2) {
    FUN_1804cf810(iVar2,0xb,param_1);
  }
  lVar4 = FUN_1804aad60(local_78,iVar2,&local_58,&uStack_50,param_3);
  return (ulonglong)*(byte *)(lVar4 + 2);
}



