// FUN_180475aa0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180475aa0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180475aa0(longlong param_1)

{
  ushort uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined **ppuVar6;
  ulonglong uVar7;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  ushort *puVar12;
  undefined1 auStack_68 [32];
  int local_48 [2];
  uint local_40 [2];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_68;
  puVar12 = (ushort *)(param_1 + 6);
  uVar9 = 0;
  lVar11 = DAT_180b909b0;
  do {
    uVar10 = 0;
    puVar8 = puVar12;
    do {
      uVar1 = *puVar8;
      uVar7 = (ulonglong)(short)uVar1;
      if ((short)uVar1 < 0) {
LAB_180475c4d:
        if (lVar11 == 0) {
          uVar5 = *(undefined4 *)((longlong)puVar8 + ((longlong)&UNK_18077f80a - param_1));
        }
        else {
          if (1 < uVar9) {
            FUN_18047bff0();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar5 = *(undefined4 *)((longlong)puVar8 + lVar11 + (0x6a - param_1));
        }
        *(undefined4 *)puVar8 = uVar5;
        lVar11 = DAT_180b909b0;
      }
      else {
        if (lVar11 == 0) {
          iVar4 = 0x47;
        }
        else {
          iVar4 = (int)(*(longlong *)(lVar11 + 0x30) - *(longlong *)(lVar11 + 0x28) >> 4);
        }
        if (iVar4 <= (short)uVar1) goto LAB_180475c4d;
        if (lVar11 == 0) {
          ppuVar6 = &PTR_s_Glock_18_180797be0 + uVar7 * 2;
        }
        else {
          if ((ulonglong)(*(longlong *)(lVar11 + 0x30) - *(longlong *)(lVar11 + 0x28) >> 4) <= uVar7
             ) goto LAB_180475cb3;
          ppuVar6 = (undefined **)(*(longlong *)(lVar11 + 0x28) + uVar7 * 0x10);
        }
        if (uVar10 < 5) {
          cVar3 = '\0';
        }
        else if (uVar10 < 10) {
          cVar3 = '\x01';
        }
        else if (uVar10 < 0xf) {
          cVar3 = '\x02';
        }
        else if (uVar10 == 0xf) {
          cVar3 = '\x06';
        }
        else if (uVar10 == 0x10) {
          cVar3 = '\a';
        }
        else if (uVar10 == 0x11) {
          cVar3 = '\b';
        }
        else if (uVar10 == 0x12) {
          cVar3 = '\x04';
        }
        else if (uVar10 == 0x13) {
          cVar3 = '\x05';
        }
        else {
          cVar3 = '\x03';
        }
        if ((cVar3 != *(char *)(ppuVar6 + 1)) &&
           ((cVar3 != '\x01' || (*(char *)(ppuVar6 + 1) != '\x03')))) goto LAB_180475c4d;
        uVar7 = (ulonglong)*puVar8;
        if (lVar11 == 0) {
          ppuVar6 = &PTR_s_Glock_18_180797be0 + uVar7 * 2;
        }
        else {
          if ((ulonglong)(*(longlong *)(lVar11 + 0x30) - *(longlong *)(lVar11 + 0x28) >> 4) <= uVar7
             ) {
LAB_180475cb3:
                    /* WARNING: Subroutine does not return */
            FUN_18047c010();
          }
          ppuVar6 = (undefined **)(uVar7 * 0x10 + *(longlong *)(lVar11 + 0x28));
        }
        uVar1 = puVar8[1];
        if ((((short)uVar1 < *(short *)((longlong)ppuVar6 + 10)) ||
            ((int)*(short *)((longlong)ppuVar6 + 0xc) + (int)*(short *)((longlong)ppuVar6 + 10) <=
             (int)(short)uVar1)) || ((*(byte *)((longlong)ppuVar6 + 9) & (uVar9 != 0) + 1U) == 0))
        goto LAB_180475c4d;
        if (DAT_180cd6878 != 0) {
          local_48[0] = (int)(short)uVar1;
          local_40[0] = uVar9;
          cVar3 = (**(code **)(*(longlong *)DAT_180cd6878 + 0x10))(DAT_180cd6878,local_40,local_48);
          lVar11 = DAT_180b909b0;
          if (cVar3 == '\0') goto LAB_180475c4d;
        }
      }
      uVar10 = uVar10 + 1;
      puVar8 = puVar8 + 2;
    } while ((int)uVar10 < 0x15);
    uVar9 = uVar9 + 1;
    puVar12 = puVar12 + 0x2a;
    if (1 < (int)uVar9) {
    }
  } while( true );
}



