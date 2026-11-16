// FUN_18036e050 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18036e050 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18036e050(undefined8 param_1,byte *param_2)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  byte *pbVar8;
  ULONGLONG UVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *******pppppppuVar15;
  undefined1 auVar16 [8];
  undefined8 *******pppppppuVar17;
  longlong lVar18;
  code *pcVar19;
  char *pcVar20;
  longlong lVar21;
  ulonglong uVar22;
  code *pcVar23;
  undefined1 auStack_218 [48];
  undefined *local_1e8;
  char **ppcStack_1e0;
  byte *local_1d8;
  byte *local_1d0;
  undefined1 local_1c8 [8];
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [16];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  char *local_198;
  longlong lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  byte *local_168;
  undefined8 *******local_160 [3];
  ulonglong local_148;
  undefined8 *******local_140 [3];
  ulonglong local_128;
  undefined4 local_118;
  undefined4 local_114;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_218;
  LOCK();
  DAT_180b90200 = 0;
  UNLOCK();
  if (param_2 == (byte *)0x0) {
    DAT_180b90200 = 0;
  }
  if (*param_2 == 0) {
    DAT_180b90200 = 0;
  }
  _local_1c8 = (undefined1  [16])0x0;
  auStack_1b8 = (undefined1  [16])0x0;
  lVar18 = -1;
  lVar21 = -1;
  do {
    lVar21 = lVar21 + 1;
  } while (param_2[lVar21] != 0);
  local_168 = param_2;
  FUN_18015ba30(local_1c8);
  auVar16 = (undefined1  [8])local_1c8;
  if (0xf < (ulonglong)auStack_1b8._8_8_) {
    auVar16 = local_1c8;
  }
  uVar22 = 0xcbf29ce484222325;
  uVar12 = 0;
  if (auStack_1b8._0_8_ != 0) {
    do {
      uVar22 = (uVar22 ^ *(byte *)((longlong)auVar16 + uVar12)) * 0x100000001b3;
      uVar12 = uVar12 + 1;
    } while (uVar12 < (ulonglong)auStack_1b8._0_8_);
  }
  lVar7 = FUN_180177b00(&DAT_180b901c0,&local_198,local_1c8,uVar22);
  lVar21 = DAT_180b901c8;
  if (*(longlong *)(lVar7 + 8) != 0) {
    lVar21 = *(longlong *)(lVar7 + 8);
  }
  FUN_18015c010(local_1c8);
  if (lVar21 != DAT_180b901c8) {
    LOCK();
    UNLOCK();
    DAT_180b90200 = *(longlong *)(lVar21 + 0x38);
  }
  lVar21 = -1;
  do {
    lVar7 = lVar21;
    lVar21 = lVar7 + 1;
  } while (param_2[lVar21] != 0);
  if ((lVar21 != 0) && (lVar7 - 4U < 0x1fc)) {
    lVar13 = 0;
    do {
      lVar14 = lVar13 + 1;
      if (param_2[lVar13 + lVar7 + -4] != (&DAT_1808055d8)[lVar13]) {
        uVar11 = -(uint)(param_2[lVar13 + lVar7 + -4] < (byte)(&DAT_1808055d8)[lVar13]) | 1;
        goto LAB_18036e1d0;
      }
      lVar13 = lVar14;
    } while (lVar14 != 5);
    uVar11 = 0;
LAB_18036e1d0:
    if (uVar11 == 0) {
      if (param_2 != param_2 + lVar21) {
        pbVar8 = param_2;
        do {
          bVar1 = *pbVar8;
          if (((bVar1 < 0x20) || (bVar1 == 0x22)) || (bVar1 == 0x27)) {
            bVar2 = false;
            goto LAB_18036e20c;
          }
          pbVar8 = pbVar8 + 1;
        } while (pbVar8 != param_2 + lVar21);
      }
      bVar2 = true;
LAB_18036e20c:
      if (bVar2) {
        local_118 = 0;
        local_114 = 0xc00000c8;
        local_48 = 0;
        local_40 = 0;
        if ((DAT_180cce330 & 1) == 0) {
          DAT_180cce330 = DAT_180cce330 | 1;
          atexit(FUN_180662340);
        }
        puVar4 = DAT_1809015c0;
        puVar3 = DAT_1808da460;
        uVar12 = 1000;
        if ((DAT_1809015c0 != DAT_1808da460) ||
           (pcVar23 = (code *)DAT_180c6f9f0, DAT_180c6f9f0 == 0)) {
          UVar9 = GetTickCount64();
          if ((puVar4 == puVar3) && (UVar9 < DAT_180c6f9e8)) {
            pcVar23 = (code *)0x0;
          }
          else {
            local_1e8 = &DAT_180901510;
            iVar6 = FUN_1805f68d0(&DAT_180901510);
            if (iVar6 != 0) goto LAB_18036eb6f;
            if (DAT_18090155c == 0x7fffffff) {
              DAT_18090155c = 0x7ffffffe;
              goto LAB_18036eb84;
            }
            if (DAT_1809015c0 == puVar3) {
              if ((DAT_180c6f9f0 == 0) && (DAT_180c6f9e8 <= UVar9)) goto LAB_18036e30a;
            }
            else {
              DAT_180901508 = 1000;
LAB_18036e30a:
              lVar21 = -1;
              do {
                uStack_1c0 = (undefined **)(lVar21 + 1);
                pcVar20 = "lient.dll:48895C24??574883EC??8B41??488D79" + lVar21;
                lVar21 = (longlong)uStack_1c0;
              } while (*pcVar20 != '\0');
              local_1c8 = (undefined1  [8])&DAT_180825dc8;
              local_198 = "patterns::init_particle_path_buffer";
              lStack_190 = 0x23;
              DAT_180c6f9f0 = FUN_1800e5d20(&local_198,local_1c8);
              DAT_1809015c0 = puVar3;
              DAT_180c6f9e8 = 0xffffffffffffffff;
              if (DAT_180c6f9f0 == 0) {
                DAT_180c6f9e8 = DAT_180901508 + UVar9;
                if (DAT_180901508 < 60000) {
                  DAT_180901508 = DAT_180901508 * 2;
                }
                else {
                  DAT_180901508 = 60000;
                }
              }
              else {
                DAT_180901508 = 1000;
              }
            }
            pcVar23 = (code *)DAT_180c6f9f0;
            FUN_1805f68fc(&DAT_180901510);
          }
        }
        if ((DAT_180cce330 & 1) == 0) {
          DAT_180cce330 = DAT_180cce330 | 1;
          atexit(FUN_180662340);
        }
        puVar3 = DAT_1808da460;
        local_1e8 = DAT_180901500;
        if ((DAT_180901500 != DAT_1808da460) ||
           (pcVar19 = (code *)DAT_180c6f9d8, DAT_180c6f9d8 == 0)) {
          UVar9 = GetTickCount64();
          if ((local_1e8 == puVar3) && (UVar9 < DAT_180c6f9e0)) {
            pcVar19 = (code *)0x0;
          }
          else {
            local_1e8 = &DAT_180901570;
            iVar6 = FUN_1805f68d0(&DAT_180901570);
            if (iVar6 != 0) {
LAB_18036eb6f:
                    /* WARNING: Subroutine does not return */
              FUN_1805f6d44(5);
            }
            if (DAT_1809015bc == 0x7fffffff) {
              DAT_1809015bc = 0x7ffffffe;
LAB_18036eb84:
                    /* WARNING: Subroutine does not return */
              FUN_1805f6d44(6);
            }
            if (DAT_180901500 == puVar3) {
              if ((DAT_180c6f9d8 == 0) && (DAT_180c6f9e0 <= UVar9)) goto LAB_18036e469;
            }
            else {
              DAT_180901560 = 1000;
LAB_18036e469:
              lVar21 = -1;
              do {
                lStack_190 = lVar21 + 1;
                lVar7 = lVar21 + 1;
                lVar21 = lStack_190;
              } while ("resourcesystem.dll:405355574881EC80000000"[lVar7] != '\0');
              local_198 = "resourcesystem.dll:405355574881EC80000000";
              uStack_1c0 = (undefined **)0x22;
              local_1c8 = (undefined1  [8])"patterns::resource_system_precache";
              DAT_180c6f9d8 = FUN_1800e5d20(local_1c8,&local_198);
              DAT_180901500 = puVar3;
              DAT_180c6f9e0 = 0xffffffffffffffff;
              if (DAT_180c6f9d8 == 0) {
                DAT_180c6f9e0 = DAT_180901560 + UVar9;
                uVar12 = DAT_180901560 * 2;
                if (59999 < DAT_180901560) {
                  uVar12 = 60000;
                }
              }
              DAT_180901560 = uVar12;
            }
            pcVar19 = (code *)DAT_180c6f9d8;
            FUN_1805f68fc(&DAT_180901570);
          }
        }
        if (pcVar23 == (code *)0x0) {
        }
        if (pcVar19 == (code *)0x0) {
        }
        if (DAT_180c631f8 == 0) {
        }
        (*pcVar23)(&local_118,param_2);
        local_40 = 0x78657476;
        (*pcVar19)(DAT_180c631f8,&local_118,&PTR_180700558);
        (*pcVar23)(&local_118,param_2);
        lVar21 = DAT_180c631f8;
        local_40 = 0x78657476;
        if (DAT_180c631f8 != 0) {
          lVar7 = FUN_18017ea70();
          *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
          puVar10 = (undefined8 *)FUN_18036f330(&local_198,lVar21);
          if (*(char *)(puVar10 + 1) == '\0') {
            pcVar20 = (char *)0x0;
          }
          else {
            pcVar20 = (char *)*puVar10;
          }
          lVar21 = FUN_18017ea70();
          if (*(int *)(lVar21 + 4) != 0) {
            *(int *)(lVar21 + 4) = *(int *)(lVar21 + 4) + -1;
          }
          if (pcVar20 != (char *)0x0) {
            lVar21 = FUN_18017ea70();
            *(int *)(lVar21 + 4) = *(int *)(lVar21 + 4) + 1;
            local_1e8 = (undefined *)0x0;
            cVar5 = FUN_1804514f0(&local_1e8,pcVar20,8);
            if (cVar5 == '\0') {
              ppcStack_1e0 = (char **)((ulonglong)ppcStack_1e0._1_7_ << 8);
            }
            else {
              ppcStack_1e0 = (char **)CONCAT71(ppcStack_1e0._1_7_,1);
            }
            lVar21 = FUN_18017ea70();
            if (*(int *)(lVar21 + 4) != 0) {
              *(int *)(lVar21 + 4) = *(int *)(lVar21 + 4) + -1;
            }
            if ((cVar5 != '\0') && (local_1e8 != (undefined *)0x0)) {
              local_1e8 = (undefined *)0xb000000000000000;
              ppcStack_1e0 = (char **)0xb000000000000008;
              uStack_1c0 = &local_1e8;
              local_1c8 = (undefined1  [8])0x2;
              local_198 = 
              "<!-- kv3 encoding:text:version{{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}} format:generic:version{{7412167c-06e9-4698-aff2-e63eb59037e7}} -->\n{{\n\tShader = \"sky.vfx\"\n\tg_flBrightnessExposureBias = 0.0\n\tg_flRenderOnlyExposureBias = 0.0\n\tSkyTexture = resource:\"{}\"\n\tg_tSkyTexture = resource:\"{}\"\n}}\n"
              ;
              lStack_190 = 0x123;
              local_1d8 = param_2;
              local_1d0 = param_2;
              FUN_1801d97f0(local_140,&local_198,local_1c8);
              uVar11 = 0x811c9dc5;
              bVar1 = *param_2;
              while (bVar1 != 0) {
                param_2 = param_2 + 1;
                uVar11 = ((int)(char)bVar1 ^ uVar11) * 0x1000193;
                bVar1 = *param_2;
              }
              lStack_190 = CONCAT44(lStack_190._4_4_,uVar11);
              local_198 = (char *)0x2000000000000000;
              local_1e8 = (undefined *)0x1;
              ppcStack_1e0 = &local_198;
              local_1c8 = (undefined1  [8])&DAT_180805778;
              uStack_1c0 = (undefined **)0x15;
              FUN_1801d97f0(local_160,local_1c8,&local_1e8);
              pppppppuVar17 = local_160;
              if (0xf < local_148) {
                pppppppuVar17 = local_160[0];
              }
              pppppppuVar15 = local_140;
              if (0xf < local_128) {
                pppppppuVar15 = local_140[0];
              }
              lVar21 = FUN_1803e7050(pppppppuVar15,pppppppuVar17);
              if (lVar21 == 0) {
                local_198 = (char *)0xdb35e39b27e1c185;
                lStack_190 = 0xa05181ee77d57a06;
                uStack_188 = 0x929654b1461b7377;
                uStack_180 = 0xa5cea54bfef7110;
                local_178 = 0xa70c9f7f916b7e19;
                local_1e8 = (undefined *)0x2b2d6d82aa402c0a;
                uStack_170 = 0x2b2d6d82aa402c0a;
                local_1c8 = (undefined1  [8])0x742064656c696166;
                uStack_1c0 = (undefined **)0x657461657263206f;
                auStack_1b8._8_8_ = 0x6c6169726574616d;
                auStack_1b8._0_8_ = 0x20786f62796b7320;
                local_1a8 = 0x2e;
                uStack_1a0 = 0;
                do {
                  lStack_190 = lVar18 + 1;
                  lVar21 = lVar18 + 1;
                  lVar18 = lStack_190;
                } while (local_1c8[lVar21] != '\0');
                local_198 = local_1c8;
                FUN_18020e620(&local_198);
              }
              else {
                local_198 = pcVar20;
                lStack_190 = lVar21;
                FUN_18036ec20(&DAT_180b901c0,local_1c8,&local_168,&local_198);
                LOCK();
                UNLOCK();
                DAT_180b90200 = lVar21;
              }
              FUN_18015c010(local_160);
              FUN_18015c010(local_140);
            }
          }
        }
        local_198 = (char *)0xdb35e39b27e1c185;
        lStack_190 = 0xa05181ee77d57a06;
        uStack_188 = 0x929654b1461b7377;
        uStack_180 = 0xa5cea54bfef7110;
        local_178 = 0xa70c9f7f916b7e19;
        local_168 = (byte *)0x2b2d6d82aa402c0a;
        uStack_170 = 0x2b2d6d82aa402c0a;
        uStack_1c0 = (undefined **)0x616f6c657270206f;
        local_1c8 = (undefined1  [8])0x742064656c696166;
        auStack_1b8._8_8_ = 0x6572757478657420;
        auStack_1b8._0_8_ = 0x786f62796b732064;
        local_1a8 = 0x2e;
        uStack_1a0 = 0;
        do {
          lStack_190 = lVar18 + 1;
          lVar21 = lVar18 + 1;
          lVar18 = lStack_190;
        } while (local_1c8[lVar21] != '\0');
        goto LAB_18036eb3a;
      }
    }
  }
  local_198 = (char *)0xdb35e39b27e1c185;
  lStack_190 = 0xa05181ee77d57a06;
  uStack_188 = 0x929654b1461b7377;
  local_168 = (byte *)0xa5cea54bfef7110;
  uStack_180 = 0xa5cea54bfef7110;
  uStack_1c0 = (undefined **)0x7420786f62796b73;
  local_1c8 = (undefined1  [8])0x2064696c61766e69;
  auStack_1b8._8_8_ = 0x2e687461;
  auStack_1b8._0_8_ = 0x7020657275747865;
  do {
    lStack_190 = lVar18 + 1;
    lVar21 = lVar18 + 1;
    lVar18 = lStack_190;
  } while (local_1c8[lVar21] != '\0');
LAB_18036eb3a:
  uStack_180 = 0xa5cea54bfef7110;
  uStack_188 = 0x929654b1461b7377;
  local_198 = local_1c8;
  FUN_18020e620(&local_198);
}



