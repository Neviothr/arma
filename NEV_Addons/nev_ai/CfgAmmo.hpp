// Config by jameslkingsley
// https://github.com/ARCOMM/ARC_AI/blob/master/addons/arc_ai_client_launchers/config.cpp
class CfgAmmo {
    class ShellCore;
    class ShellBase: ShellCore {
        soundFly[] = {"a3\data_f_curator\sound\cfgsounds\incoming2.wss", 2, 1, 1000};
    };

    PROTO(RocketBase);
    LAUNCHER(R_PG32V_F, RocketBase);
    LAUNCHER(R_TBG32V_F, R_PG32V_F);
    PROTO(MissileBase);
    LAUNCHER(M_NLAW_AT_F, MissileBase);
    LAUNCHER(M_PG_AT, MissileBase);
    LAUNCHER(M_AT, M_PG_AT);
    LAUNCHER(M_Titan_AA, MissileBase);
    LAUNCHER(M_Titan_AT, MissileBase);
    LAUNCHER(M_Titan_AP, M_Titan_AT);
    LAUNCHER(M_Scalpel_AT, MissileBase);
    LAUNCHER(M_Scalpel_AT_hidden, M_Scalpel_AT);
    LAUNCHER(R_80mm_HE, RocketBase);
    LAUNCHER(M_Air_AA, MissileBase);
    LAUNCHER(M_Air_AA_MI02, M_Air_AA);
    LAUNCHER(M_Zephyr, M_Titan_AA);
    LAUNCHER(M_Titan_AA_long, M_Titan_AA);
    LAUNCHER(M_Air_AT, M_Titan_AT);
    LAUNCHER(M_Titan_AA_static, M_Titan_AA);
    PROTO(LaserBombCore);
    LAUNCHER(Bo_GBU12_LGB, LaserBombCore);
    LAUNCHER(Bo_GBU12_LGB_MI10, Bo_GBU12_LGB);
    PROTO(BombCore);
    LAUNCHER(Bo_Mk82, BombCore);
    LAUNCHER(Bo_Mk82_MI08, Bo_Mk82);
    LAUNCHER(Missile_AA_04_F, MissileBase);
    LAUNCHER(Missile_AGM_02_F, MissileBase);
    LAUNCHER(Rocket_04_HE_F, MissileBase);
    LAUNCHER(Rocket_04_AP_F, Rocket_04_HE_F);
    LAUNCHER(Bomb_04_F, LaserBombCore);
    LAUNCHER(Missile_AA_03_F, Missile_AA_04_F);
    LAUNCHER(Missile_AGM_01_F, Missile_AGM_02_F);
    LAUNCHER(Rocket_03_HE_F, Rocket_04_HE_F);
    LAUNCHER(Rocket_03_AP_F, Rocket_04_AP_F);
    LAUNCHER(Bomb_03_F, Bomb_04_F);
    PROTO(rhs_ammo_atgmBase_base);
    LAUNCHER(rhs_ammo_fuelpod_proxy, rhs_ammo_atgmBase_base);
    LAUNCHER(rhs_ammo_fuelpod_proxy2, rhs_ammo_atgmBase_base);
    LAUNCHER(rhs_ammo_plamen_pod, rhs_ammo_atgmBase_base);
    LAUNCHER(TOW_AT, Missile_AGM_02_F);
    LAUNCHER(Hydra_HE, R_80mm_HE);
    LAUNCHER(rhs_ammo_9m14m, rhs_ammo_atgmBase_base);
    PROTO(rhs_ammo_atgmCore_base);
    LAUNCHER(rhs_ammo_9m112, rhs_ammo_atgmCore_base);
    LAUNCHER(rhs_ammo_9m112m, rhs_ammo_9m112);
    LAUNCHER(rhs_ammo_9m112m2, rhs_ammo_9m112m);
    LAUNCHER(rhs_ammo_9m124, rhs_ammo_9m112m);
    LAUNCHER(rhs_ammo_9m128, rhs_ammo_atgmCore_base);
    LAUNCHER(rhs_ammo_9m113, rhs_ammo_atgmBase_base);
    LAUNCHER(rhs_ammo_9m113m, rhs_ammo_9m113);
    LAUNCHER(rhs_ammo_9m111, rhs_ammo_atgmBase_base);
    LAUNCHER(rhs_ammo_9m111m, rhs_ammo_9m111);
    LAUNCHER(rhs_ammo_9m117, rhs_ammo_atgmCore_base);
    LAUNCHER(rhs_ammo_9m118, rhs_ammo_9m117);
    LAUNCHER(rhs_ammo_9m119, rhs_ammo_atgmCore_base);
    LAUNCHER(rhs_ammo_9m119m, rhs_ammo_9m119);
    LAUNCHER(rhs_ammo_9m119f, rhs_ammo_9m119);
    LAUNCHER(rhs_ammo_9m133, rhs_ammo_atgmBase_base);
    LAUNCHER(rhs_ammo_9m115, rhs_ammo_9m119);
    LAUNCHER(rhs_ammo_9m131, rhs_ammo_9m115);
    LAUNCHER(rhs_ammo_9m131m, rhs_ammo_9m131);
    LAUNCHER(rhs_ammo_9m131f, rhs_ammo_9m131m);
    LAUNCHER(rhs_ammo_9m133f, rhs_ammo_9m131f);
    LAUNCHER(rhs_ammo_9m1331, rhs_ammo_9m133);
    LAUNCHER(rhs_ammo_9m133m2, rhs_ammo_9m133);
    LAUNCHER(rhs_ammo_3m7, rhs_ammo_atgmBase_base);
    LAUNCHER(rhs_ammo_9k114, rhs_ammo_atgmBase_base);
    LAUNCHER(rhs_ammo_9m120, rhs_ammo_atgmBase_base);
    LAUNCHER(rhs_ammo_9k32, M_Titan_AA);
    LAUNCHER(rhs_ammo_9k38, rhs_ammo_9k32);
    LAUNCHER(rhs_proxy_ags30_mag, rhs_ammo_atgmBase_base);
    LAUNCHER(rhs_proxy_pkm_mag, rhs_ammo_atgmBase_base);
    PROTO(rhs_ammo_rpgShell_base);
    LAUNCHER(rhs_ammo_pg9v, rhs_ammo_rpgShell_base);
    LAUNCHER(rhs_ammo_pg9n, rhs_ammo_pg9v);
    LAUNCHER(rhs_ammo_pg9vnt, rhs_ammo_pg9v);
    LAUNCHER(rhs_ammo_og9v, rhs_ammo_rpgShell_base);
    LAUNCHER(rhs_ammo_og9vm, rhs_ammo_og9v);
    LAUNCHER(rhs_rpg26_rocket, R_PG32V_F);
    LAUNCHER(rhs_rpg7v2_pg7vl, rhs_rpg26_rocket);
    LAUNCHER(rhs_rpg7v2_tbg7v, rhs_rpg7v2_pg7vl);
    LAUNCHER(rhs_rshg2_rocket, rhs_rpg7v2_tbg7v);
    LAUNCHER(rhs_rpg18_rocket, rhs_rpg26_rocket);
    LAUNCHER(rhs_ammo_M136_rocket, RocketBase);
    LAUNCHER(rhs_rpg7v2_pg7vr, rhs_rpg7v2_pg7vl);
    LAUNCHER(rhs_rpg7v2_og7v, rhs_rpg7v2_pg7vl);
    PROTO(rhs_ammo_TOW_AT);
    LAUNCHER(rhs_ammo_TOW2_AT, rhs_ammo_TOW_AT);
    LAUNCHER(rhs_ammo_TOW2_AT_static, rhs_ammo_TOW2_AT);
    LAUNCHER(R_PG7_F, RocketBase);
    LAUNCHER(M_Jian_AT, Missile_AGM_01_F);
    LAUNCHER(rhs_ammo_s8, R_80mm_HE);
    LAUNCHER(rhs_ammo_s8DF, rhs_ammo_s8);
    LAUNCHER(rhs_ammo_s8t, rhs_ammo_s8);
    LAUNCHER(rhs_ammo_s5_ub16, rhs_ammo_s8);
    LAUNCHER(rhs_ammo_s5_ub32, rhs_ammo_s5_ub16);
    LAUNCHER(rhs_ammo_b8v20a_pod, rhs_ammo_atgmBase_base);
    LAUNCHER(rhs_ammo_b8m1_pod, rhs_ammo_b8v20a_pod);
    LAUNCHER(rhs_ammo_ub16_pod, rhs_ammo_b8v20a_pod);
    LAUNCHER(rhs_ammo_ub32_pod, rhs_ammo_b8v20a_pod);
    LAUNCHER(rhs_ammo_upk23_pod, rhs_ammo_b8v20a_pod);
    LAUNCHER(rhs_ammo_falanga_pod, rhs_ammo_b8v20a_pod);
    LAUNCHER(rhs_ammo_ataka_tube, rhs_ammo_b8v20a_pod);
    LAUNCHER(rhs_ammo_ataka_tube_2, rhs_ammo_ataka_tube);
    LAUNCHER(rhs_ammo_r73, Missile_AA_04_F);
    LAUNCHER(rhs_ammo_r74m2, rhs_ammo_r73);
    LAUNCHER(rhs_ammo_r77, rhs_ammo_r73);
    LAUNCHER(rhs_ammo_r77m, rhs_ammo_r77);
    LAUNCHER(rhs_ammo_ch29, Missile_AGM_02_F);
    LAUNCHER(rhs_ammo_9m127m, rhs_ammo_9m120);
    LAUNCHER(rhs_ammo_fab250, Bomb_04_F);
    LAUNCHER(rhs_ammo_Sidewinder_AA, MissileBase);
    LAUNCHER(rhs_ammo_aim120, rhs_ammo_Sidewinder_AA);
    LAUNCHER(rhs_ammo_aim120_offset0, rhs_ammo_aim120);
    LAUNCHER(rhs_ammo_Sidewinder_AA_delay, rhs_ammo_Sidewinder_AA);
    LAUNCHER(rhs_ammo_Sidewinder_AA_heli, rhs_ammo_Sidewinder_AA);
    LAUNCHER(rhs_ammo_Sidewinder_AA_a10, rhs_ammo_Sidewinder_AA);
    LAUNCHER(rhs_ammo_Hydra_HE_Heli, Rocket_04_HE_F);
    LAUNCHER(RHS_M151_Ammo_MELB, rhs_ammo_Hydra_HE_Heli);
    LAUNCHER(RHS_M229_Ammo_MELB, RHS_M151_Ammo_MELB);
    LAUNCHER(RHS_DAGR_Ammo_MELB, MissileBase);
    LAUNCHER(rhs_ammo_Hellfire_AT, Missile_AGM_02_F);
    LAUNCHER(RHS_MELB_AGM_114K, rhs_ammo_Hellfire_AT);
    LAUNCHER(rhs_ammo_agm65, rhs_ammo_Hellfire_AT);
    LAUNCHER(rhs_ammo_agm65_x3, rhs_ammo_agm65);
    LAUNCHER(rhs_ammo_agm65_offset0, rhs_ammo_agm65);
    LAUNCHER(rhs_ammo_Hydra_M151_Heli, rhs_ammo_Hydra_HE_Heli);
    LAUNCHER(rhs_ammo_Hydra_M229_Heli, rhs_ammo_Hydra_M151_Heli);
    LAUNCHER(rhs_ammo_Hydra_HE_A10, rhs_ammo_Hydra_HE_Heli);
    LAUNCHER(rhs_ammo_Stinger_AA, M_Titan_AA);
    LAUNCHER(rhs_ammo_ANALQ131, MissileBase);
    LAUNCHER(rhs_pod_hellfire_4, rhs_ammo_ANALQ131);
    LAUNCHER(rhs_pod_hellfire_2, rhs_pod_hellfire_4);
    LAUNCHER(rhs_pod_FFAR_19, rhs_pod_hellfire_4);
    LAUNCHER(rhs_pod_FFAR_7, rhs_pod_hellfire_4);
    LAUNCHER(rhs_pod_AGM65, rhs_pod_hellfire_4);
    LAUNCHER(rhs_pod_DAGR, rhs_pod_AGM65);
    LAUNCHER(rhs_pod_FFAR_19_green, rhs_pod_hellfire_4);
    LAUNCHER(rhs_pod_FFAR_7_green, rhs_pod_hellfire_4);
    LAUNCHER(rhs_pod_hellfire_green, rhs_pod_hellfire_4);
    LAUNCHER(rhs_pod_AGM65x3_rack, rhs_pod_AGM65);
    LAUNCHER(rhs_pod_LAU68, rhs_pod_AGM65x3_rack);
    LAUNCHER(rhs_pod_empty, rhs_pod_AGM65x3_rack);
    LAUNCHER(rhs_mount_empty, rhs_pod_empty);
    LAUNCHER(rhs_FFAR_pod_empty, rhs_pod_empty);
    LAUNCHER(rhs_DAGR_pod_empty, rhs_pod_empty);
    LAUNCHER(rhs_pod_empty_agm65, rhs_pod_empty);
    LAUNCHER(rhs_ammo_gbu12, Bomb_04_F);
    LAUNCHER(RHS_9M79_1_F, rhs_ammo_ch29);
    LAUNCHER(RHS_9M79_1_K, RHS_9M79_1_F);
    LAUNCHER(RHS_9M79B, RHS_9M79_1_F);
    LAUNCHER(rhs_ammo_M136_hedp_rocket, rhs_ammo_M136_rocket);
    LAUNCHER(rhs_ammo_M136_hp_rocket, rhs_ammo_M136_rocket);
    LAUNCHER(rhs_ammo_m72a7_rocket, rhs_ammo_M136_hedp_rocket);
    LAUNCHER(rhsammo_fim92_missile, M_Titan_AA);
    LAUNCHER(rhs_ammo_M_fgm148_AT, M_Titan_AT);
    LAUNCHER(rhs_ammo_M_fgm172a_AT, M_NLAW_AT_F);
    LAUNCHER(rhs_ammo_M_fgm172b_MPV, rhs_ammo_M_fgm172a_AT);
    LAUNCHER(rhs_ammo_smaw_HEAA, RocketBase);
    LAUNCHER(rhs_ammo_smaw_HEDP, RocketBase);
    LAUNCHER(rhs_ammo_smaw_SR, RocketBase);
    LAUNCHER(rhs_ammo_empty, MissileBase);
};