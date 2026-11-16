// FUN_1803c5bb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803c5bb0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803c5bb0(longlong *param_1,longlong param_2,undefined8 param_3,char param_4,
                  undefined2 param_5,undefined4 *param_6)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int *piVar12;
  undefined8 *_Buf1;
  undefined1 auStack_138 [32];
  ulonglong local_118;
  undefined8 local_110;
  undefined4 *local_108;
  undefined1 local_100;
  undefined1 local_f8;
  undefined1 local_f0;
  undefined2 local_e8;
  byte local_d8 [4];
  int local_d4;
  uint local_d0;
  longlong *local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8 [2];
  undefined1 local_98 [32];
  longlong local_78;
  int local_70;
  int local_6c;
  int iStack_68;
  longlong local_60;
  int local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_138;
  local_110 = CONCAT62(local_110._2_6_,param_5);
  local_d0 = 0;
  local_118 = local_118 & 0xffffffffffffff00;
  local_c8 = param_1;
  plVar7 = (longlong *)FUN_18028c850(local_a8,*(undefined1 *)(param_2 + 1),param_3,*param_6);
  local_a8[0] = *plVar7;
  if (local_a8[0] == 0) {
  }
  if (*(char *)((longlong)param_6 + 3) == '\0') {
  }
  if (*(char *)(*local_c8 + 0xdc1) == '\0') {
    lVar9 = *(longlong *)local_c8[1];
    lVar8 = FUN_18017ea70();
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
    if (lVar9 + 0x78 == 0) {
      bVar1 = false;
    }
    else {
      local_d8[0] = 0;
      cVar3 = FUN_1804514f0(local_d8,lVar9 + 0x78,1);
      if (cVar3 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    bVar2 = local_d8[0];
    lVar9 = FUN_18017ea70();
    if (*(int *)(lVar9 + 4) != 0) {
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
    }
    if (bVar1) {
      local_d8[0] = bVar2 & 0xf7;
      lVar9 = *(longlong *)local_c8[1];
      if (lVar9 + 0x78 != 0) {
        lVar8 = FUN_18017ea70();
        *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
        FUN_1801ad7b0(lVar9 + 0x78,local_d8);
        lVar9 = FUN_18017ea70();
        if (*(int *)(lVar9 + 4) != 0) {
          *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
        }
      }
    }
  }
  FUN_18027c3e0(&local_78,*(undefined8 *)local_c8[2]);
  plVar7 = local_c8;
  if ((((((local_50 == '\0') || (local_6c < 0)) || (iStack_68 < 0)) ||
       (((local_70 < 0 || (local_58 < 0)) || ((local_70 < local_6c || (local_58 < iStack_68)))))) ||
      (((local_6c != 0 && (local_78 == 0)) || ((iStack_68 != 0 && (local_60 == 0)))))) ||
     (iVar6 = iStack_68 + local_6c, 0x100000 - iStack_68 < local_6c)) {
    iVar6 = -1;
  }
  local_100 = *(undefined1 *)(param_2 + 1);
  local_e8 = param_5;
  local_f0 = 0;
  local_f8 = (undefined1)param_3;
  local_110 = *(undefined8 *)local_c8[5];
  local_108 = param_6;
  local_118 = *(undefined8 *)local_c8[1];
  local_d4 = iVar6;
  if (param_4 == '\0') {
    cVar3 = FUN_1802958b0(local_100,*(undefined8 *)local_c8[2],*(undefined8 *)local_c8[3],
                          *(undefined8 *)local_c8[4]);
  }
  else {
    cVar3 = FUN_180296090(&DAT_180cc9690);
  }
  *(int *)plVar7[6] = *(int *)plVar7[6] + 1;
  FUN_18027c3e0(&local_78);
  if (((((((local_50 != '\0') && (-1 < iVar6)) && (-1 < local_6c)) &&
        ((-1 < iStack_68 && (-1 < local_70)))) &&
       ((-1 < local_58 && ((local_6c <= local_70 && (iStack_68 <= local_58)))))) &&
      ((local_6c == 0 || (local_78 != 0)))) &&
     ((((iStack_68 == 0 || (local_60 != 0)) && (local_6c <= 0x100000 - iStack_68)) &&
      (iVar6 <= iStack_68 + local_6c)))) {
    if ((((local_6c < 0) || (iStack_68 < 0)) ||
        ((local_70 < 0 || ((local_58 < 0 || (local_70 < local_6c)))))) ||
       (((local_58 < iStack_68 || ((local_6c != 0 && (local_78 == 0)))) ||
        (((iStack_68 != 0 && (local_60 == 0)) ||
         (iVar4 = iStack_68 + local_6c, 0x100000 - iStack_68 < local_6c)))))) {
      iVar4 = -1;
    }
    if (iVar4 - iVar6 < 0x401) {
      if ((((((-1 < local_6c) && (-1 < iStack_68)) && (-1 < local_70)) &&
           (((-1 < local_58 && (local_6c <= local_70)) &&
            ((iStack_68 <= local_58 && ((local_6c == 0 || (local_78 != 0)))))))) &&
          ((iStack_68 == 0 || (local_60 != 0)))) &&
         ((local_6c <= 0x100000 - iStack_68 && (iVar6 == iStack_68 + local_6c)))) {
      }
      if (cVar3 != '\0') {
        local_c8 = (longlong *)CONCAT44(local_c8._4_4_,-local_6c);
        iVar4 = -local_6c;
        do {
          if ((((((local_6c < 0) || (iStack_68 < 0)) || (local_70 < 0)) ||
               ((local_58 < 0 || (local_70 < local_6c)))) || (local_58 < iStack_68)) ||
             ((((local_6c != 0 && (local_78 == 0)) || ((iStack_68 != 0 && (local_60 == 0)))) ||
              (iVar5 = iStack_68 + local_6c, 0x100000 - iStack_68 < local_6c)))) {
            iVar5 = -1;
          }
          if (iVar5 <= iVar6) {
          }
          lVar9 = local_78;
          lVar8 = local_60;
          iVar5 = FUN_18027c2f0(&local_78);
          if (((iVar6 < 0) || (iVar5 < 0)) || (iVar5 <= iVar6)) {
            lVar8 = FUN_18017ea70();
            lVar9 = 0x20;
            *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
LAB_1803c5fb6:
            local_c0 = 0;
            cVar3 = FUN_1804514f0(&local_c0,lVar9,8);
            if (cVar3 == '\0') {
              bVar1 = false;
            }
            else {
              bVar1 = true;
              local_b8 = local_c0;
            }
          }
          else {
            if (iVar6 < local_6c) {
              lVar9 = (longlong)iVar6 * 0x70 + lVar9;
            }
            else {
              lVar9 = (longlong)(iVar4 + iVar6) * 0x70 + lVar8;
            }
            lVar9 = lVar9 + 0x20;
            lVar8 = FUN_18017ea70();
            *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
            if (lVar9 != 0) goto LAB_1803c5fb6;
            bVar1 = false;
          }
          lVar9 = local_b8;
          lVar8 = FUN_18017ea70();
          if (*(int *)(lVar8 + 4) != 0) {
            *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
          }
          if (bVar1) {
            if (lVar9 == 0) goto LAB_1803c6108;
            lVar8 = FUN_18017ea70();
            *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
            if (lVar9 + 0x10 == 0) {
              bVar1 = false;
            }
            else {
              local_c0 = 0;
              cVar3 = FUN_1804514f0(&local_c0,lVar9 + 0x10,8);
              if (cVar3 == '\0') {
                bVar1 = false;
              }
              else {
                bVar1 = true;
                local_b0 = local_c0;
              }
            }
            lVar8 = local_b0;
            lVar10 = FUN_18017ea70();
            if (*(int *)(lVar10 + 4) != 0) {
              *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
            }
            lVar10 = 0;
            if (bVar1) {
              lVar10 = lVar8;
            }
            if (lVar10 == 0) goto LAB_1803c6108;
            puVar11 = (undefined8 *)FUN_180454030(local_98,lVar10,0x100);
            local_d0 = local_d0 | 1;
            _Buf1 = puVar11;
            if (0xf < (ulonglong)puVar11[3]) {
              _Buf1 = (undefined8 *)*puVar11;
            }
            lVar8 = puVar11[2];
            local_118 = 2;
            lVar10 = FUN_1801c56a0(_Buf1);
            if (lVar10 != -1) {
              lVar8 = lVar8 - (lVar10 + 1);
              _Buf1 = (undefined8 *)((longlong)_Buf1 + lVar10 + 1);
            }
            if (((lVar8 != 0x1c) ||
                (iVar6 = memcmp(_Buf1,"solidcolor_glowproperty.vmat",0x1c), iVar6 != 0)) &&
               ((lVar8 != 0x1e ||
                (iVar6 = memcmp(_Buf1,"solidcolor_glowproperty.vmat_c",0x1e), iVar6 != 0))))
            goto LAB_1803c6108;
            bVar1 = true;
          }
          else {
            lVar9 = 0;
LAB_1803c6108:
            bVar1 = false;
          }
          if ((local_d0 & 1) != 0) {
            local_d0 = local_d0 & 0xfffffffe;
            FUN_18015c010(local_98);
          }
          if (!bVar1) {
            if (lVar9 == local_a8[0]) {
              piVar12 = (int *)plVar7[9];
            }
            else {
              *(undefined1 *)plVar7[7] = 0;
              piVar12 = (int *)plVar7[8];
            }
            *piVar12 = *piVar12 + 1;
          }
          local_d4 = local_d4 + 1;
          iVar4 = (int)local_c8;
          iVar6 = local_d4;
        } while( true );
      }
    }
  }
  *(undefined1 *)plVar7[7] = 0;
}



