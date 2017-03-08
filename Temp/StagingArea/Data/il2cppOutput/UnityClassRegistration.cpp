struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_ParticlesLegacy();
	RegisterModule_ParticlesLegacy();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

void RegisterAllClasses()
{
	//Total: 99 classes
	//0. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//1. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//2. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//3. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//4. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//5. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//6. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//7. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//8. Skybox
	void RegisterClass_Skybox();
	RegisterClass_Skybox();

	//9. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//10. LineRenderer
	void RegisterClass_LineRenderer();
	RegisterClass_LineRenderer();

	//11. GUITexture
	void RegisterClass_GUITexture();
	RegisterClass_GUITexture();

	//12. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//13. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//14. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//15. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//16. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//17. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//18. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//19. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//20. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//21. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//22. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//23. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//24. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//25. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//26. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//27. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//28. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//29. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//30. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//31. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//32. Joint
	void RegisterClass_Joint();
	RegisterClass_Joint();

	//33. SpringJoint
	void RegisterClass_SpringJoint();
	RegisterClass_SpringJoint();

	//34. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//35. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//36. CapsuleCollider
	void RegisterClass_CapsuleCollider();
	RegisterClass_CapsuleCollider();

	//37. WheelCollider
	void RegisterClass_WheelCollider();
	RegisterClass_WheelCollider();

	//38. CharacterController
	void RegisterClass_CharacterController();
	RegisterClass_CharacterController();

	//39. Rigidbody2D
	void RegisterClass_Rigidbody2D();
	RegisterClass_Rigidbody2D();

	//40. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//41. NavMeshAgent
	void RegisterClass_NavMeshAgent();
	RegisterClass_NavMeshAgent();

	//42. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//43. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//44. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//45. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//46. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//47. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//48. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//49. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//50. GUIText
	void RegisterClass_GUIText();
	RegisterClass_GUIText();

	//51. TextMesh
	void RegisterClass_TextMesh();
	RegisterClass_TextMesh();

	//52. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//53. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//54. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//55. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//56. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//57. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//58. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//59. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//60. TrailRenderer
	void RegisterClass_TrailRenderer();
	RegisterClass_TrailRenderer();

	//61. ParticleRenderer
	void RegisterClass_ParticleRenderer();
	RegisterClass_ParticleRenderer();

	//62. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//63. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//64. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//65. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//66. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//67. Texture2DArray
	void RegisterClass_Texture2DArray();
	RegisterClass_Texture2DArray();

	//68. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//69. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//70. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//71. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//72. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//73. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//74. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//75. BoxCollider2D
	void RegisterClass_BoxCollider2D();
	RegisterClass_BoxCollider2D();

	//76. PhysicsMaterial2D
	void RegisterClass_PhysicsMaterial2D();
	RegisterClass_PhysicsMaterial2D();

	//77. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//78. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//79. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//80. Avatar
	void RegisterClass_Avatar();
	RegisterClass_Avatar();

	//81. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//82. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//83. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//84. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//85. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//86. NavMeshAreas
	void RegisterClass_NavMeshAreas();
	RegisterClass_NavMeshAreas();

	//87. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//88. SkinnedMeshRenderer
	void RegisterClass_SkinnedMeshRenderer();
	RegisterClass_SkinnedMeshRenderer();

	//89. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//90. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//91. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//92. LightProbeGroup
	void RegisterClass_LightProbeGroup();
	RegisterClass_LightProbeGroup();

	//93. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//94. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//95. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//96. UnityAnalyticsManager
	void RegisterClass_UnityAnalyticsManager();
	RegisterClass_UnityAnalyticsManager();

	//97. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

	//98. NavMeshSettings
	void RegisterClass_NavMeshSettings();
	RegisterClass_NavMeshSettings();

}
