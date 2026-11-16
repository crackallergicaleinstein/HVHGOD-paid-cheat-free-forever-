// FUN_1801950a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801950a0 */

longlong FUN_1801950a0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  size_t _Size;
  bool bVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *_Buf1;
  char *pcVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined1 local_1f0 [16];
  char local_1e0 [32];
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [32];
  undefined1 local_180 [32];
  undefined1 local_160 [32];
  undefined1 local_140 [56];
  char local_108 [240];
  
  uVar7 = 0;
  uVar10 = 0;
  iVar3 = FUN_1805f68d0(&DAT_180b90310);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180b9035c == 0x7fffffff) {
    DAT_180b9035c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  puVar5 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar5 = (undefined8 *)*param_3;
  }
  uVar9 = 0xcbf29ce484222325;
  if (param_3[2] != 0) {
    do {
      uVar9 = (uVar9 ^ *(byte *)((longlong)puVar5 + uVar7)) * 0x100000001b3;
      uVar7 = uVar7 + 1;
    } while (uVar7 < (ulonglong)param_3[2]);
  }
  lVar4 = FUN_180177b00(&DAT_180b907a0,local_1f0,param_3,uVar9,uVar10);
  lVar8 = DAT_180b907a8;
  if (*(longlong *)(lVar4 + 8) != 0) {
    lVar8 = *(longlong *)(lVar4 + 8);
  }
  if (lVar8 != DAT_180b907a8) {
    puVar5 = param_3 + 4;
    _Buf1 = (undefined8 *)(lVar8 + 0x70);
    if (0xf < (ulonglong)param_3[7]) {
      puVar5 = (undefined8 *)*puVar5;
    }
    _Size = *(size_t *)(lVar8 + 0x80);
    if (0xf < *(ulonglong *)(lVar8 + 0x88)) {
      _Buf1 = (undefined8 *)*_Buf1;
    }
    if ((_Size == param_3[6]) && ((_Size == 0 || (iVar3 = memcmp(_Buf1,puVar5,_Size), iVar3 == 0))))
    {
      FUN_180195650(local_1e0,lVar8 + 0x30);
      local_108[0] = '\x01';
      pcVar6 = local_1e0;
      bVar2 = true;
      bVar1 = false;
      goto LAB_1801951d0;
    }
  }
  local_108[0xe0] = '\0';
  pcVar6 = local_108 + 8;
  bVar2 = false;
  bVar1 = true;
LAB_1801951d0:
  *(undefined1 *)(param_2 + 0xd8) = 0;
  if (pcVar6[0xd8] != '\0') {
    FUN_1801b90e0(param_2);
    *(undefined1 *)(param_2 + 0xd8) = 1;
  }
  if ((bVar1) && (local_108[0xe0] != '\0')) {
    FUN_18015b930(local_108 + 0xa8);
    FUN_18015b930(local_108 + 0x88);
    FUN_18015c010(local_108 + 0x68);
    FUN_18015c010(local_108 + 0x48);
    FUN_18015c010(local_108 + 0x28);
    FUN_18015c010(local_108 + 8);
  }
  if ((bVar2) && (local_108[0] != '\0')) {
    FUN_18015b930(local_140);
    FUN_18015b930(local_160);
    FUN_18015c010(local_180);
    FUN_18015c010(local_1a0);
    FUN_18015c010(local_1c0);
    FUN_18015c010(local_1e0);
  }
  FUN_1805f68fc(&DAT_180b90310);
  return param_2;
}



