// FUN_1803f1ff0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803f1ff0 */

ulonglong FUN_1803f1ff0(undefined8 param_1,uint param_2)

{
  longlong *plVar1;
  bool bVar2;
  undefined *puVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined *in_RAX;
  undefined *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *_Buf1;
  int iVar10;
  undefined *puVar11;
  undefined *local_58;
  undefined1 local_50 [40];
  
  if (param_2 != 0xffffffff) {
    uVar5 = param_2 & 0x7fff;
    in_RAX = (undefined *)(ulonglong)uVar5;
    if ((uVar5 < 0x4000) || (uVar5 == 0x7fff)) goto LAB_1803f2380;
    puVar7 = (undefined *)FUN_1803d4150();
    in_RAX = puVar7;
    if (puVar7 == (undefined *)0x0) goto LAB_1803f2380;
    puVar11 = (undefined *)0xffffffffffffffff;
    iVar10 = DAT_180c7c438;
    if (DAT_180c7c438 == 0) {
      in_RAX = (undefined *)GetTickCount64();
      if (in_RAX < DAT_180c7c408) {
        iVar10 = 0;
      }
      else {
        local_58 = &DAT_1809bb2b0;
        iVar10 = FUN_1805f68d0(&DAT_1809bb2b0);
        if (iVar10 != 0) goto LAB_1803f23a0;
        if (DAT_1809bb2fc == 0x7fffffff) {
          DAT_1809bb2fc = 0x7ffffffe;
          goto LAB_1803f23b5;
        }
        if ((DAT_180c7c438 == 0) && (DAT_180c7c408 <= in_RAX)) {
          DAT_180c7c438 = FUN_1804174b0("CEntityInstance",0xa8a45978);
          if (DAT_180c7c438 == 0) {
            DAT_180c7c408 = in_RAX + 1000;
          }
          else {
            DAT_180c7c408 = (undefined *)0xffffffffffffffff;
          }
        }
        iVar10 = DAT_180c7c438;
        in_RAX = (undefined *)FUN_1805f68fc(&DAT_1809bb2b0);
      }
    }
    iVar6 = DAT_180c7c418;
    if (DAT_180c7c418 == 0) {
      in_RAX = (undefined *)GetTickCount64();
      if (in_RAX < DAT_180c7c410) {
        iVar6 = 0;
      }
      else {
        local_58 = &DAT_1809bb300;
        iVar6 = FUN_1805f68d0(&DAT_1809bb300);
        if (iVar6 != 0) {
LAB_1803f23a0:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1809bb34c == 0x7fffffff) {
          DAT_1809bb34c = 0x7ffffffe;
LAB_1803f23b5:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if ((DAT_180c7c418 == 0) && (DAT_180c7c410 <= in_RAX)) {
          DAT_180c7c418 = FUN_1804174b0("CEntityIdentity",0xbecfac7);
          if (DAT_180c7c418 == 0) {
            puVar11 = in_RAX + 1000;
          }
          DAT_180c7c410 = puVar11;
        }
        iVar6 = DAT_180c7c418;
        in_RAX = (undefined *)FUN_1805f68fc(&DAT_1809bb300);
      }
    }
    if ((iVar10 != 0) && (iVar6 != 0)) {
      lVar8 = FUN_18017ea70();
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
      if (puVar7 + iVar10 == (undefined *)0x0) {
        bVar2 = false;
      }
      else {
        local_58 = (undefined *)0x0;
        cVar4 = FUN_1804514f0(&local_58,puVar7 + iVar10,8);
        if (cVar4 == '\0') {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
      }
      puVar11 = local_58;
      in_RAX = (undefined *)FUN_18017ea70();
      if (*(int *)(in_RAX + 4) != 0) {
        *(int *)(in_RAX + 4) = *(int *)(in_RAX + 4) + -1;
      }
      if ((bVar2) && (puVar11 != (undefined *)0x0)) {
        lVar8 = FUN_18017ea70();
        *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
        local_58 = (undefined *)0x0;
        cVar4 = FUN_1804514f0(&local_58,puVar11,8);
        puVar3 = local_58;
        in_RAX = (undefined *)FUN_18017ea70();
        if (*(int *)(in_RAX + 4) != 0) {
          *(int *)(in_RAX + 4) = *(int *)(in_RAX + 4) + -1;
        }
        if ((cVar4 != '\0') && (puVar3 == puVar7)) {
          lVar8 = FUN_18017ea70();
          *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
          bVar2 = false;
          if (puVar11 + 0x10 != (undefined *)0x0) {
            local_58 = (undefined *)((ulonglong)local_58 & 0xffffffff00000000);
            cVar4 = FUN_1804514f0(&local_58,puVar11 + 0x10,4);
            if (cVar4 == '\0') {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
          }
          puVar3 = local_58;
          lVar8 = FUN_18017ea70();
          if (*(int *)(lVar8 + 4) != 0) {
            *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
          }
          in_RAX = (undefined *)0x0;
          if (bVar2) {
            in_RAX = (undefined *)((ulonglong)puVar3 & 0xffffffff);
          }
          if ((uint)in_RAX == param_2) {
            lVar8 = FUN_18017ea70();
            *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
            if (puVar11 + iVar6 == (undefined *)0x0) {
              bVar2 = false;
            }
            else {
              local_58 = (undefined *)((ulonglong)local_58 & 0xffffffff00000000);
              cVar4 = FUN_1804514f0(&local_58,puVar11 + iVar6,4);
              if (cVar4 == '\0') {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
            }
            iVar6 = (int)local_58;
            in_RAX = (undefined *)FUN_18017ea70();
            iVar10 = *(int *)(in_RAX + 4);
            if (iVar10 != 0) {
              iVar10 = iVar10 + -1;
              *(int *)(in_RAX + 4) = iVar10;
            }
            if ((bVar2) && (iVar6 < 0)) {
              uVar9 = FUN_1803d3fa0(iVar10,puVar7);
              _Buf1 = (undefined8 *)FUN_180454030(local_50,uVar9,0x60);
              plVar1 = _Buf1 + 2;
              if (0xf < (ulonglong)_Buf1[3]) {
                _Buf1 = (undefined8 *)*_Buf1;
              }
              if (*plVar1 == 0x14) {
                iVar10 = memcmp(_Buf1,"C_CSGO_PreviewPlayer",0x14);
                FUN_18015c010(local_50);
                return (ulonglong)(iVar10 == 0);
              }
              FUN_18015c010(local_50);
              return 0;
            }
          }
        }
      }
    }
  }
LAB_1803f2380:
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



