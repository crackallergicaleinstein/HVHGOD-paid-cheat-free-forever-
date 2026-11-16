// FUN_180276b70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180276b70 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180276b70(undefined8 param_1,undefined8 *param_2,ulonglong param_3,undefined8 param_4)

{
  char cVar1;
  short sVar2;
  int iVar3;
  ULONGLONG UVar4;
  longlong lVar5;
  undefined8 uVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fStackX_24;
  undefined1 auStack_128 [32];
  int *local_108;
  undefined8 local_f8;
  char *local_e8;
  longlong local_e0;
  char *local_d8;
  undefined8 local_d0;
  int *local_c8;
  char *local_b8;
  longlong local_b0;
  int local_a8;
  float local_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  ulonglong local_88;
  
  local_88 = DAT_1808d5f00 ^ (ulonglong)auStack_128;
  if (((param_3 == 0) || (DAT_180cc9338 == 0)) || ((int)param_4 < 1)) goto LAB_180277055;
  fStackX_24 = (float)((ulonglong)param_4 >> 0x20);
  local_f8 = param_3;
  sVar2 = thunk_FUN_180624430(fStackX_24);
  if (((0 < sVar2) || (fVar11 = 0.0, fStackX_24 < 0.0)) || (fVar13 = 1.0, 1.0 <= fStackX_24))
  goto LAB_180277055;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar8 = DAT_1808f0500;
  lVar5 = DAT_1808da460;
  uVar10 = 1000;
  if ((DAT_1808f0500 != DAT_1808da460) || (lVar9 = DAT_180c64cd0, DAT_180c64cd0 == 0)) {
    UVar4 = GetTickCount64();
    if ((lVar8 == lVar5) && (UVar4 < DAT_180c64cd8)) goto LAB_180277055;
    local_c8 = (int *)&DAT_1808f0450;
    iVar3 = FUN_1805f68d0(&DAT_1808f0450);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808f049c == 0x7fffffff) {
      DAT_1808f049c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if (DAT_1808f0500 == lVar5) {
      if ((DAT_180c64cd0 == 0) && (DAT_180c64cd8 <= UVar4)) goto LAB_180276ce0;
    }
    else {
      DAT_1808f0448 = 1000;
LAB_180276ce0:
      lVar8 = -1;
      do {
        local_b0 = lVar8 + 1;
        lVar9 = lVar8 + 1;
        lVar8 = local_b0;
      } while ("client.dll:>E8????????418B9668030000"[lVar9] != '\0');
      local_b8 = "client.dll:>E8????????418B9668030000";
      local_e8 = "patterns::get_interp_amount";
      local_e0 = 0x1b;
      DAT_180c64cd0 = FUN_1800e5d20(&local_e8,&local_b8);
      DAT_1808f0500 = lVar5;
      DAT_180c64cd8 = 0xffffffffffffffff;
      if (DAT_180c64cd0 == 0) {
        DAT_180c64cd8 = DAT_1808f0448 + UVar4;
        if (DAT_1808f0448 < 60000) {
          DAT_1808f0448 = DAT_1808f0448 * 2;
        }
        else {
          DAT_1808f0448 = 60000;
        }
      }
      else {
        DAT_1808f0448 = 1000;
      }
    }
    lVar9 = DAT_180c64cd0;
    FUN_1805f68fc(&DAT_1808f0450);
    if (lVar9 == 0) goto LAB_180277055;
  }
  lVar5 = FUN_18017ea70();
  *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
  FUN_180241550(&local_f8,lVar9,local_f8);
  lVar5 = FUN_18017ea70();
  if (*(int *)(lVar5 + 4) != 0) {
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
  }
  if (local_f8._4_1_ == '\0') goto LAB_180277055;
  fVar12 = (float)local_f8;
  sVar2 = thunk_FUN_180624430(local_f8 & 0xffffffff);
  if (((0 < sVar2) || (fVar12 < fVar11)) || (0.25 < fVar12)) goto LAB_180277055;
  uVar6 = FUN_18026b840(fVar12 * 64.0);
  local_f8._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
  local_a4 = fStackX_24 - local_f8._4_4_;
  local_a8 = (int)param_4 - (int)uVar6;
  local_f8 = uVar6;
  if (fVar11 <= local_a4) {
LAB_180276e3a:
    if (fVar13 <= local_a4) {
LAB_180276e41:
      FUN_18026b710(&local_a8);
    }
  }
  else {
    local_a4 = local_a4 + fVar13;
    if (local_a4 < fVar13) {
      local_a8 = local_a8 + -1;
      if (fVar11 <= local_a4) goto LAB_180276e3a;
      goto LAB_180276e41;
    }
    local_a4 = fVar11;
  }
  if (local_a8 < 1) {
LAB_180277055:
    *(undefined1 *)((longlong)param_2 + 0xc) = 0;
  }
  piVar7 = (int *)FUN_18027ae30();
  *piVar7 = *piVar7 + 1;
  local_f8 = DAT_180cc9338;
  local_c8 = piVar7;
  local_a0 = fVar11;
  fStack_9c = fVar11;
  local_98 = fVar11;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar8 = DAT_1808f04a0;
  lVar5 = DAT_1808da460;
  if ((DAT_1808f04a0 != DAT_1808da460) || (lVar9 = DAT_180c64cc8, DAT_180c64cc8 == 0)) {
    UVar4 = GetTickCount64();
    if ((lVar8 == lVar5) && (UVar4 < DAT_180c64cc0)) goto LAB_18027704d;
    local_b8 = &DAT_1808f03f0;
    iVar3 = FUN_1805f68d0(&DAT_1808f03f0);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808f043c == 0x7fffffff) {
      DAT_1808f043c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if (DAT_1808f04a0 == lVar5) {
      if ((DAT_180c64cc8 == 0) && (DAT_180c64cc0 <= UVar4)) goto LAB_180276f48;
    }
    else {
      DAT_1808f0440 = 1000;
LAB_180276f48:
      lVar8 = -1;
      do {
        local_e0 = lVar8 + 1;
        lVar9 = lVar8 + 1;
        lVar8 = local_e0;
      } while ("client.dll:>E8????????418B86F4030000C1E804A801"[lVar9] != '\0');
      local_e8 = "client.dll:>E8????????418B86F4030000C1E804A801";
      local_d8 = "patterns::get_interpolated_shoot_position";
      local_d0 = 0x29;
      DAT_180c64cc8 = FUN_1800e5d20(&local_d8,&local_e8);
      DAT_1808f04a0 = lVar5;
      DAT_180c64cc0 = 0xffffffffffffffff;
      if (DAT_180c64cc8 == 0) {
        DAT_180c64cc0 = DAT_1808f0440 + UVar4;
        uVar10 = DAT_1808f0440 * 2;
        if (59999 < DAT_1808f0440) {
          uVar10 = 60000;
        }
      }
      DAT_1808f0440 = uVar10;
    }
    lVar9 = DAT_180c64cc8;
    FUN_1805f68fc(&DAT_1808f03f0);
    if (lVar9 == 0) goto LAB_18027704d;
  }
  lVar5 = FUN_18017ea70();
  *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
  local_108 = &local_a8;
  FUN_18022ffc0(&local_d8,lVar9,local_f8,&local_a0);
  lVar5 = FUN_18017ea70();
  if (*(int *)(lVar5 + 4) != 0) {
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
  }
  if ((((char)local_d0 != '\0') && (local_d8 != (char *)0x0)) &&
     (cVar1 = FUN_1802646f0(&local_a0), cVar1 != '\0')) {
    *param_2 = CONCAT44(fStack_9c,local_a0);
    *(float *)(param_2 + 1) = local_98;
    *(undefined1 *)((longlong)param_2 + 0xc) = 1;
    *piVar7 = *piVar7 + -1;
  }
LAB_18027704d:
  *(undefined1 *)((longlong)param_2 + 0xc) = 0;
  *piVar7 = *piVar7 + -1;
}



