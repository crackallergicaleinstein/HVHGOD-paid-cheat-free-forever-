// FUN_180364060 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180364060 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180364060(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  short sVar9;
  int iVar10;
  ULONGLONG UVar11;
  longlong lVar12;
  undefined *puVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 auStack_108 [32];
  longlong *local_e8;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined *local_c8;
  undefined4 local_c0;
  char *local_b8;
  undefined8 local_b0;
  longlong local_a8 [7];
  longlong *local_70;
  ulonglong local_68;
  longlong local_60;
  ulonglong local_58 [6];
  
  local_58[0] = DAT_1808d5f00 ^ (ulonglong)auStack_108;
  lVar12 = param_1[10];
  lVar16 = param_1[9];
  lVar1 = param_1[8];
  lVar2 = param_1[7];
  lVar3 = param_1[6];
  lVar4 = param_1[5];
  local_c8 = (undefined *)param_1[4];
  local_d8 = (undefined *)param_1[3];
  local_70 = (longlong *)0x0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_b8 = "tier0.dll:g_pMemAlloc";
    local_b0 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_b8);
  }
  local_70 = (longlong *)
             (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x48);
  *local_70 = (longlong)
              std::
              _Func_impl_no_alloc<`public:___cdecl_`public:_void___cdecl_features::movement::jumpbug::finalize_landing(systems::input::usercmd*___ptr64)___ptr64'::`2'::<lambda_18>::operator()(void)const___ptr64'::`2'::<lambda_1>,bool,int>
              ::vftable;
  local_70[1] = (longlong)local_d8;
  local_70[2] = (longlong)local_c8;
  local_70[3] = lVar4;
  local_70[4] = lVar3;
  local_70[5] = lVar2;
  local_70[6] = lVar1;
  local_70[7] = lVar16;
  local_70[8] = lVar12;
  puVar5 = (undefined1 *)*param_1;
  local_e8 = local_a8;
  uVar7 = FUN_180413b80(local_c8,*(undefined8 *)param_1[1],param_1[2],2);
  *puVar5 = uVar7;
  if (local_70 != (longlong *)0x0) {
    (**(code **)(*local_70 + 0x20))(local_70,local_70 != local_a8);
    local_70 = (longlong *)0x0;
  }
  if ((((*(char *)*param_1 != '\0') && (*(char *)(param_1[6] + 0xc) != '\0')) &&
      (*(int *)(param_1[6] + 8) == 2)) &&
     ((uVar15 = param_1[3], *(char *)(uVar15 + 0xb4) != '\0' &&
      (lVar12 = param_1[4], *(char *)(lVar12 + 0xb4) != '\0')))) {
    puVar14 = &local_68;
    uVar7 = *(undefined1 *)param_1[0xb];
    uVar17 = uVar15;
    local_68 = uVar15;
    local_60 = lVar12;
    while (cVar8 = FUN_180354630(uVar7,CONCAT31((uint3)(*(uint *)(uVar17 + 0x7c) >> 9),
                                                (char)(*(uint *)(uVar17 + 0x7c) >> 1)) & 0xffffff01,
                                 *(undefined4 *)(uVar17 + 0x88)), cVar8 != '\0') {
      cVar8 = *(char *)param_1[0xc];
      if (cVar8 != '\0') {
        auVar20 = ZEXT464(*(uint *)(uVar17 + 0xac));
        fVar18 = *(float *)(param_1[5] + 0x4c);
        sVar9 = thunk_FUN_180624430(fVar18);
        if (0 < sVar9) {
        }
        sVar9 = thunk_FUN_180624430(auVar20._0_8_);
        if (0 < sVar9) {
        }
        if (fVar18 < auVar20._0_4_) {
        }
      }
      puVar14 = puVar14 + 1;
      if (puVar14 == local_58) {
        if (cVar8 == '\0') {
LAB_18036433f:
          bVar6 = true;
        }
        else {
          auVar21 = ZEXT464(*(uint *)(lVar12 + 0xa0));
          lVar12 = param_1[5];
          auVar20 = ZEXT464(*(uint *)(lVar12 + 0x48));
          local_c8 = *(undefined **)(uVar15 + 100);
          local_c0 = *(undefined4 *)(uVar15 + 0x6c);
          local_d8 = *(undefined **)(lVar12 + 8);
          local_d0 = *(undefined4 *)(lVar12 + 0x10);
          cVar8 = FUN_180354800(&local_d8,&local_c8,0x7f800000);
          if (((cVar8 != '\0') && (sVar9 = thunk_FUN_180624430(auVar20._0_8_), sVar9 < 1)) &&
             ((sVar9 = thunk_FUN_180624430(*(undefined4 *)(uVar15 + 0xa0)), sVar9 < 1 &&
              (((fVar18 = auVar20._0_4_ + 0.01, *(float *)(uVar15 + 0xa0) <= fVar18 &&
                (sVar9 = thunk_FUN_180624430(auVar21._0_8_), sVar9 < 1)) &&
               (auVar21._0_4_ <= fVar18)))))) goto LAB_18036433f;
          bVar6 = false;
        }
        uVar15 = (ulonglong)DAT_180c6f7dc;
        if ((DAT_180c6f7dc == 0) && (UVar11 = GetTickCount64(), DAT_180c6f7f0 <= UVar11)) {
          local_c8 = &DAT_180900f10;
          iVar10 = FUN_1805f68d0(&DAT_180900f10);
          if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_180900f5c == 0x7fffffff) {
            DAT_180900f5c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          uVar15 = (ulonglong)DAT_180c6f7dc;
          if ((DAT_180c6f7dc == 0) && (DAT_180c6f7f0 <= UVar11)) {
            DAT_180c6f7dc = FUN_1804174b0("C_BaseEntity",0x84cdad2);
            uVar15 = (ulonglong)DAT_180c6f7dc;
            if (DAT_180c6f7dc == 0) {
              DAT_180c6f7f0 = UVar11 + 1000;
            }
            else {
              DAT_180c6f7f0 = 0xffffffffffffffff;
            }
          }
          FUN_1805f68fc(&DAT_180900f10);
        }
        if ((*(longlong *)(param_1[2] + 8) == 0) || ((int)uVar15 == 0)) {
          local_c8._0_5_ = (uint5)(uint)local_c8;
          puVar13 = local_c8;
          goto LAB_180364452;
        }
        lVar16 = uVar15 + *(longlong *)(param_1[2] + 8);
        lVar12 = FUN_18017ea70();
        *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
        if (lVar16 == 0) {
LAB_18036442f:
          local_d8._0_5_ = (uint5)(uint)local_d8;
        }
        else {
          local_d8 = (undefined *)((ulonglong)local_d8 & 0xffffffff00000000);
          cVar8 = FUN_1804514f0(&local_d8,lVar16,4);
          if (cVar8 == '\0') goto LAB_18036442f;
          local_d8._0_5_ = CONCAT14(1,(uint)local_d8);
        }
        lVar12 = FUN_18017ea70();
        if (*(int *)(lVar12 + 4) != 0) {
          *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
        }
        puVar13 = local_d8;
LAB_180364452:
        iVar10 = -1;
        if ((char)((ulonglong)puVar13 >> 0x20) != '\0') {
          iVar10 = (int)puVar13;
        }
        if (!bVar6) {
        }
        cVar8 = *(char *)param_1[0xd];
        fVar18 = 0.0;
        if (cVar8 != '\0') {
          if (iVar10 < 0) {
          }
          if (*(int *)(param_1[3] + 0xb0) < iVar10) {
          }
          fVar19 = *(float *)(param_1[3] + 0x9c);
          sVar9 = thunk_FUN_180624430(fVar19);
          if (0 < sVar9) {
          }
          if (fVar18 < fVar19) {
          }
        }
        if (cVar8 == '\0') {
        }
        if (iVar10 < 0) {
        }
        if (*(int *)(param_1[4] + 0xb0) < iVar10) {
        }
        thunk_FUN_180624430(*(undefined4 *)(param_1[4] + 0x9c));
      }
      uVar17 = *puVar14;
    }
  }
}



