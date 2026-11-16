// FUN_180209c70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180209c70 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180209c70(void)

{
  longlong lVar1;
  undefined8 ****ppppuVar2;
  size_t sVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 ****ppppuVar9;
  void *_Buf2;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined8 ****local_38 [2];
  size_t local_28;
  ulonglong local_20;
  ulonglong local_10;
  
  lVar1 = DAT_180cc9bb8;
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_68;
  lVar11 = DAT_180cc9bb0;
  lVar8 = DAT_180c63930;
  do {
    if (lVar11 == lVar1) {
      DAT_180c63930 = lVar8;
    }
    DAT_180c63930 = lVar8;
    if (*(longlong *)(lVar11 + 0x58) == 0) {
LAB_180209d9f:
      plVar10 = (longlong *)(lVar11 + 8);
      if ((longlong *)(lVar11 + 0x68) != plVar10) {
        if (0xf < *(ulonglong *)(lVar11 + 0x20)) {
          plVar10 = (longlong *)*plVar10;
        }
        FUN_180113930((longlong *)(lVar11 + 0x68),plVar10,*(undefined8 *)(lVar11 + 0x18));
      }
    }
    else {
      if (lVar8 == 0) {
        uVar12 = 0;
      }
      else {
        lVar6 = FUN_18017ea70();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        puVar7 = (undefined8 *)FUN_18020f880(local_48,lVar8);
        if (*(char *)(puVar7 + 1) == '\0') {
          uVar12 = 0;
        }
        else {
          uVar12 = *puVar7;
        }
        lVar8 = FUN_18017ea70();
        if (*(int *)(lVar8 + 4) != 0) {
          *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
        }
      }
      FUN_180454280(local_38,uVar12,0x100);
      uVar4 = local_20;
      sVar3 = local_28;
      ppppuVar2 = local_38[0];
      if (local_28 == 0) {
LAB_180209d95:
        FUN_18015c010(local_38);
        goto LAB_180209d9f;
      }
      _Buf2 = (void *)(lVar11 + 0x48);
      if (0xf < *(ulonglong *)(lVar11 + 0x60)) {
        _Buf2 = *(void **)(lVar11 + 0x48);
      }
      ppppuVar9 = local_38;
      if (0xf < local_20) {
        ppppuVar9 = local_38[0];
      }
      if ((local_28 == *(size_t *)(lVar11 + 0x58)) &&
         (iVar5 = memcmp(ppppuVar9,_Buf2,local_28), iVar5 == 0)) goto LAB_180209d95;
      if ((undefined8 *****)(lVar11 + 0x68) != local_38) {
        ppppuVar9 = local_38;
        if (0xf < uVar4) {
          ppppuVar9 = ppppuVar2;
        }
        FUN_180113930((undefined8 ****)(lVar11 + 0x68),ppppuVar9,sVar3);
      }
      FUN_18015c010(local_38);
    }
    lVar11 = lVar11 + 0x98;
    lVar8 = DAT_180c63930;
  } while( true );
}



